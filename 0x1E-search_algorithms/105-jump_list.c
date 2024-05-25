#include "search_algos.h"
#include <math.h>


/**
 * jump_list - Simulate jump search algorithm for linked lists
 * @list: Pointer to hte head of the list
 * @size: siz of hte list
 * @value: the target value
 * Return: pointer to the node with the target value or Null if not possible`
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i, jump = sqrt(size);
	listint_t *temp = list;
	listint_t *prev = list;

	if (list == NULL || size < 1)
		return (NULL);

	while (value > temp->n && temp->express)
	{
		prev = temp;
		/*Do the jump*/
		for (i = 0; i < jump && temp->next; i++)
		{
			temp = temp->next;
		}
		printf("Value checked at index [%li] = [%i]\n", temp->index, temp->n);
	}

	printf("Value found between indexes [%li] and [%li]\n",
		prev->index, temp->index);

	temp = prev;
	for (i = 0; i < jump && temp != NULL; i++)
	{
		printf("Value checked at index [%li] = [%i]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
