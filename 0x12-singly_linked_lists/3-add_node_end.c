#include "lists.h"

/**
 * add_node_end - Add a node to the end of the list
 * 
 * @head: a pointer to the pointer of the first node
 * @str: the string to fill the last node with
 * 
 * Return: pointer to the node of NULL on fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *current, *new_node;

        if (str == NULL)
                return (NULL);

        new_node = malloc(sizeof(list_t));
        if (new_node == NULL)
                return (NULL);

        new_node->str = strdup(str);
        new_node->len = strlen(str);
        new_node->next = NULL;

        if (*head == NULL)
                *head = new_node;
        else
        {
                current = *head;
                while (current->next != NULL)
                {
                        current = current->next;
                }
                current->next = new_node;
        }

        return (new_node);
}
