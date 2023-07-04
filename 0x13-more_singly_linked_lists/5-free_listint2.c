#include "lists.h"

/**
 * free_listint2 - Free a linked lists that starts with the
 * node pointed to by @*head
 *
 * @head: A pointer to the pointer points to the first node
 *
 * Desciption: Free the node and go to the next and do the same
 * untill it's the end (next == NULL)
 *
 * Return: It doesn't
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
	{
		head = NULL;
		return;
	}

	current = *head;
	while ((*head)->next != NULL)
	{
		*head = current->next;

		free(current);

		current = *head;
	}
	free(*head);

	*head = NULL;
	head = NULL;
	current = NULL;
}
