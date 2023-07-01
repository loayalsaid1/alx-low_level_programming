#include "lists.h"

/**
 * print_list - print all the elements of a list
 *
 * @h: head
 *
 * Return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (nodes);
}