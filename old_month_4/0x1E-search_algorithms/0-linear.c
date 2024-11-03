#include "search_algos.h"


/**
 * linear_search - A simple linear search algorithm
 * @array: The array to be searched
 * @size: THe length of the array
 * @value: Is the target value to search for
 * Return: -1, if not found or the array is empty; the index otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
