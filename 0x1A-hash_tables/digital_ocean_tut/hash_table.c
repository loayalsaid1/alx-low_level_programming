#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash.h"

#define CAPACITY 50000


    
unsigned long hash_function(char *str)
{
    unsigned long hash_digest = 0;

    for (int i = 0; str[i]; i++)
        hash_digest += str[i];
    
    return hash_digest % CAPASITY;
}

Ht_item *create_item(char *key, char *value)
{
    Ht_item *item = malloc(sizeof(Ht_item));
    item->key = malloc(strlen(key) + 1);
    item->value = malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}

HashTable *create_table(int size)
{
    HashTable *table = malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = calloc(table->size, sizeof(Ht_item *));
    /* I don't really know why we are using this loop while we actually using 
    calloc instead of malloc?! */
    for (int i = 0; i < table->size;  i++)
        table->items[i] = NULL;
    
    table->overflow_buckets = create_overflow_buckets(table);

    return (table);
}

void free_item(Ht_item *item)
{
    free(item->key);
    free(item->value);
    free(item);
}

void free_table(HashTable *table)
{
    for (int i = 0; i < table->size; i++)
    {
        Ht_item *item = table->items[i];
        if (item != NULL)
            free_item(item);
    }
    free(table->items);
    free_overflow_buckets(table);
    free(table);
}

void print_list(LinkedList *head, unsigned long i)
{
    LinkedList *temp = head;

    while(temp)
    {
        printf("Index: %ld, Key: %s, Value: %s\n", i,
            temp->item->key, temp->item->value);
        temp = temp->next;
    }
}
void print_table(HashTable *table)
{
    printf("\nHash Table\n-----------------------\n");

    for (int i = 0; i < table->size; i++)
    {
        if (table->items[i])
        {
            printf("Index: %d, Key: %s, Value: %s\n", i,
            table->items[i]->key, table->items[i]->value);
            print_list(table->overflow_buckets[i], i);
        }
    }

    printf("-----------------------\n\n");
}


void ht_insert(HashTable *table, char *key, char *value)
{
    Ht_item *item = create_item(key, value);
    unsigned long index = hash_function(key);
    Ht_item *at_index = table->items[index];

    if(at_index == NULL)
    {
        if (table->count == table->size)
        {
            printf("Insert Error: Hash Table is full\n");
            free_item(item);
            return;
        }

        table->items[index] = item;
        table->count++;
    }
    else
    {
        if (strcmp(table->items[index]->key, key) == 0)
        {
            free(table->items[index]->value);
            table->items[index]->value = strdup(value);
            return;
        }
        else
        {
            handle_collision(table, index, item);
            return;
        }
    }
}

void handle_collision(HashTable *table, unsigned long index, Ht_item *item)
{
    LinkedList *head = table->overflow_buckets[index];

    if (head)
    {
        table->overflow_buckets[index] = linkedlist_insert(head, item);
        return;
    }
    else
    {
        head = allocate_list();
        head->item = item;
        head->next = NULL;
        table->overflow_buckets[index] = head;
        return;
    }
}

char *ht_search(HashTable *table, char *key)
{
    unsigned long index = hash_function(key);
    Ht_item *item = table->items[index];
    LinkedList *head = table->overflow_buckets[index];

    if (item)
    {
        if (strcmp(item->key, key) == 0)
            return (item->value);
        
        if (head == NULL)
            return (NULL);
        head;
        while(head)
        {
            if (strcmp(head->item->key, key) == 0)
                return head->item->value;
            
            head = head->next;
        }
    }

    return (NULL);
}

void print_search(HashTable *table, char *key)
{
    char *value = ht_search(table, key);

    if (value)
    {
        printf("Key: %s, Value: %s\n", key, value);
        return;
    }
    else
        printf("Key: %s does not exist\n", key);
}

LinkedList *allocate_list()
{
    LinkedList *list = malloc(sizeof(LinkedList));
    if (list == NULL)
    {
        return NULL;
    }
    return list;
}

LinkedList *linkedlist_insert(LinkedList *list, Ht_item *item)
{
    LinkedList *head, *node, *temp;

    if (!list)
    {
        LinkedList *head = allocate_list();
        head->item = item;
        head->next = NULL;

        return head;
    }
    else if (list->next == NULL)
    {
        LinkedList *node = allocate_list();
        node->item = item;
        node->next = NULL;
        list->next = node;

        return list;
    }
    
    temp = list;
    while (temp->next)
        temp = temp->next;
    
    node = allocate_list();
    node->item = item ;
    node->next = NULL;
    temp->next = node;

    return list;
}

Ht_item *linkedlist_remove(LinkedList *list)
{
    LinkedList *node;
    LinkedList *temp;
    Ht_item *it;

    if (!list || !list->next)
        return NULL;
    
    node = list->next;
    temp = list;
    temp->next = NULL;
    list = node;
    it = NULL;
    memcpy(temp->item, it, sizeof(Ht_item));
    free(temp->item->key);
    free(temp->item->value);
    free(temp->item);
    free(temp);
    return it;
}

void free_linkedlist(LinkedList *list)
{
    LinkedList *temp = list;

    while (list)
    {
        temp = list;
        list = list->next;
        free(temp->item->key);
        free(temp->item->value);
        free(temp->item);
        free(temp);
    }
}

LinkedList **create_overflow_buckets(HashTable *table)
{
    LinkedList **buckets = calloc(table->size, sizeof(LinkedList *));

    for (int i = 0; i < table->size; i++)
    {
        buckets[i] = NULL;
    }
    return buckets;
}

void free_overflow_buckets(HashTable *table)
{
    LinkedList **buckets = table->overflow_buckets;

    for (int i = 0; i < table->size; i++)
        free(buckets[i]);
    free(buckets);
    table->overflow_buckets = NULL;
}

void ht_delete(HashTable *table, char *key)
{
    int index = hash_function(key);
    Ht_item *item = table->items[index];
    LinkedList *prev, *current, *node, *head = table->overflow_buckets[index];

    if (item == NULL)
        return;
    else
    {
        if (head == NULL && strcmp(item->key, key) == 0)
        {
            table->items[index] = NULL;
            free_item(item);
            table->count--;
            return;
        }
        else if (head != NULL)
        {
            if (strcmp(item->key, key) == 0)
            {
                free_item(item);
                node = head;
                head = head->next;
                table->overflow_buckets[index] = head;
                node->next = NULL;
                table->items[index] = create_item(node->item->key, node->item->value);
                free_linkedlist(node);
                return;
            }
            /* Now i changed the comming part a bit */
            if (strcmp(head->item->key, key) == 0)
            {
                table->overflow_buckets[index] = head->next;
                free_linkedlist(head);
                return;
            }
            current = head->next;
            prev = head;
            while(current)
            {
                if (strcmp(current->item->key, key) == 0)
                {
                    prev->next = current->next;
                    current->next = NULL;
                    free_linkedlist(current);
                    return;
                }
            }

        }

    }
}


int main()
{
    HashTable *ht = create_table(CAPACITY);
    ht_insert(ht, (char *)"1", (char *)"First address");
    ht_insert(ht, (char *)"2", (char *)"Second address");
    ht_insert(ht, (char *)"Hel", (char *)"Third address");
    ht_insert(ht, (char *)"Cau", (char *)"Fourth address");
    print_search(ht, (char *)"1");
    print_search(ht, (char *)"2");
    print_search(ht, (char *)"3");
    print_search(ht, (char *)"Hel");
    print_search(ht, (char *)"Cau"); // Collision!
    print_table(ht);
    ht_delete(ht, (char *)"1");
    ht_delete(ht, (char *)"Cau");
    print_table(ht);
    free_table(ht);
    return 0;
}
