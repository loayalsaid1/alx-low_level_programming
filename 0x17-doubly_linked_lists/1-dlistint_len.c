#include "lists.h"

/**
 * dlistint_len - return the length of a doubly linked list
 * @h: a pointer to the header file
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
