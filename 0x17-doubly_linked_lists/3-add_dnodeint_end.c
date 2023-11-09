#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a DLL
 * @head: a pointer to the head pointer
 * @n: the data to feed the node
 * Return: node address or NULL on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	current = *head;
	while (current && current->next)
		current = current->next;
	if (current)
	{
		current->next = new_node;
		new_node->prev = current;
	}
	else
		*head = new_node;

	return (new_node);
}
