#include "search_algos.h"
#include <math.h>


/**
 * jump_search - Jump search algorithm  for sorted int arrays
 * @array: The array
 * @size: Array lenght
 * @value: The target value
 * Return: The inedex of the target if possible; -1 otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump, left, right;
	int i;

	if (array == NULL || size < 1)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = left + jump;

	while (value > array[right])
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		left = right;
		right += jump;
		if (right > size - 1)
			break;
	}

	printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	if (right > size - 1)
		right = size - 1;

	for (i = left; (size_t) i <= right && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
