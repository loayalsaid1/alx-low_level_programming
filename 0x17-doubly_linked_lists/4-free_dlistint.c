#include "lists.h"

/**
 * free_dlistint - free a DLL
 * @head: a pointer to the first node
 * Return: VOID
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
