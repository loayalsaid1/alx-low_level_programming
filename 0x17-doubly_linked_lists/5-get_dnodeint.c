#include "lists.h"

/**
 * get_dnodeint_at_index - Name answers!
 * @head: the head of the list
 * @index: index!
 * Return: Node, or Null on fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
