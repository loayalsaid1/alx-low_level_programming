#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h: pointer to head node
 *
 * Description: Increase the count and point to the next one and repeat unliss
 * it's NULL. all as an iteration prossec
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;

		h = h->next;
	}

	return (count);
}

