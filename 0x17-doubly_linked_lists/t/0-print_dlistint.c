#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: a pointer to the first node
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	if (current == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
