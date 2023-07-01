#include "lists.h"

/**
 * add_node - adds a new node at the beginnning of a list
 *
 * @head: head
 * @str: string
 *
 * Return: the address of the new element, else
 * NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;

	return (*head);
}
