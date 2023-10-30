#include "lists.h"

/**
 * insert_dnodeint_at_index - Name is discreptive already! ;)
 * @h: a pointer to the head pointer
 * @idx: the targetted index
 * @n: the data to feed the created node
 * Return: Pointer to the new node, or NUll on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, (const int) n));

	while (current->next != NULL)
	{
		if (count == idx)
			break;
		count++;
		current = current->next;
	}

	if (idx == count)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = current;
		new_node->prev = current->prev;
		new_node->prev->next = new_node;
		current->prev = new_node;

		return (new_node);
	}
	else if (idx == (count + 1))
		return (add_dnodeint_end(h, (const int) n));
	else
		return (NULL);
}
