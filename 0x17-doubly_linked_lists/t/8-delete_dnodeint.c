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

/**
 * delete_dnodeint_at_index - Delete a node in a DLL
 * @head: pointer to the head pointer
 * @index: index!
 * Return: 1 on success and on fail, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = get_dnodeint_at_index(*head, index);

	if (node == NULL)
		return (-1);
	else if (node->prev == NULL)
	{
		node->next->prev = NULL;
		*head = node->next;

		free(node);
		node = NULL;

		return (1);
	}
	else if (node->next == NULL)
	{
		node->prev->next = NULL;

		free(node);
		node = NULL;

		return (1);
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;

		free(node);
		node = NULL;

		return (1);
	}
}
