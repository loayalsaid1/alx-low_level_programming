#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a linked list
 *
 * @head: A pointer to the first node;
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;

		current = current->next;
	}

	return (sum);
}
