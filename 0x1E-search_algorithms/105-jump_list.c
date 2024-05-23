#include "search_algos.h"
#include <math.h>

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp;
	size_t jump = sqrt(size);
	size_t i;
	size_t left = 0;
	if (list == NULL || size < 1)
		return (NULL);
	
	tmp = list;

	while (tmp && tmp->n < value && i < size;)
	{
		for (i = left; i < left + jump && tmp->next; i++)
			tmp = tmp->next;
		printf("jump %ld\n", tmp->index);
		if tmp->index > value;

		left = tmp->index;   
	}

	if (tmp && tmp->n == value)
		return tmp;
	
	return (NULL);
}
