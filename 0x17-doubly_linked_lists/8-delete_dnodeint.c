#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node in a DLL
 * @head: pointer to the head pointer
 * @index: index!
 * Return: 1 on success and on fail, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}

	count = 1;
	current = (*head)->next;
	while (current)
	{
		if (count == index)
		{
			current->prev->next = current->next;
			if (current->next)
			{
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}

	return (-1);
}
