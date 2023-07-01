#include "lists.h"

/**
 * list_len - gets the number of elements in a list
 *
 * @h: head
 *
 * Return: number of elements
 *
 */
size_t list_len(const list_t *h)
{
        size_t nodes;

        nodes = 0;
        while (h != NULL)
        {
                nodes++;
                h = h->next;
        }
        return (nodes);
}