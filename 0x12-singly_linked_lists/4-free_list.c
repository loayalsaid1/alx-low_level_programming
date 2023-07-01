#include "lists.h"

/**
 * free_list - fress a list
 *
 * @head: head
 *
 */
void free_list(list_t *head)
{
        list_t *temp;

        while (head != NULL)
        {
                temp = head;
                head = head->next;
                free(temp->str);
                free(temp);
        }

        head = NULL;
}

