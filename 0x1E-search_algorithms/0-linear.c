#include "search_algos.h"


/**
 * linear_search - Linear search algorithm for an array of ints
 * @array: The array
 * @size: The size
 * @value: The target value
 * Return: -1 if no array given or target not there.... the index of
 *  the target otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value Checked array[%li] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
