#include "lists.h"

/**
 * sum_dlistint - Get the sum of the data in all of the nodes of the DLL
 * @head: head pointer
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;

		current = current->next;
	}

	return (sum);
}
