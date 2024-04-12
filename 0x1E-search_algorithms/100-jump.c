#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched
 * Return: NULL if value is not present or array is NULL,
 *      the resutl otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	int jump_size = sqrt(size);
	int i = 0, j;
	int start, end;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < (int)size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += jump_size;
	}

	start = i - jump_size;
	printf("Value found between indexes [%d] and [%d]\n", start, i);
	end = i < (int)size ? i : (int)size - 1;


	for (j = start; j <= end; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
