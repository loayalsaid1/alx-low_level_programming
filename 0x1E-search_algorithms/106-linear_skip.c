#include "search_algos.h"


/**
 * linear_skip - Search a skiplist
 * @list: Pointer to the head of the list
 * @value: Tartget value
 * Return: Pointer to the nodee with target value or NULL otherwise
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list, *prev = list;

	if (list == NULL)
		return (NULL);

	while (value > temp->n && temp->express)
	{
		prev = temp;
		temp = temp->express;
		printf("Value checked at index [%li] = [%i]\n", temp->index, temp->n);
	}

	if (temp->express == NULL && value > temp->n)
	{
		prev = temp;
		while (temp->next)
			temp = temp->next;
	}
	printf("Value found between indexes [%li] and [%li]\n",
		prev->index, temp->index);

	temp = prev;
	while (temp)
	{
		printf("Value checked at index [%li] = [%i]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
