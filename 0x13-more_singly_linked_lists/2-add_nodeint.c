#include "lists.h"

/**
 * add_nodeint - Add a node at the beggening, and
 * return a pointer to it
 *
 * @head: A pointer to the head pointer(the one who pointes to the first node
 * or the first one)
 * @n: The number to be fed to the n field in the struct
 *
 * Description: Create a node and fill it and make the pointer to the next
 * points to the head node so it becomes the second. Then check if the head
 * is NULL so you can make the new one is head and return
 * and check for errors
 *
 * return: The adress to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
