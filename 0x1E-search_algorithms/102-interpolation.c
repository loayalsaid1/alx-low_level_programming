#include "search_algos.h"


/**
 * interpolation_search - Interplation search for sorted int array
 * @array: The array to search
 * @size: the size fo the array
 * @value: Target value
 * Return: Index of <value>; -1 if not possible`
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low_index, high_index, low_value, high_value;

	if (array == NULL || size < 1)
		return (-1);

	low_index = 0;
	high_index = size - 1;

	while (low_index < high_index)
	{
		low_value = array[low_index];
		high_value = array[high_index];

		pos = low_index + (((double)(high_index - low_index) / (
			high_value - low_value)) * (value - low_value));

		if (pos > high_index)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value > array[pos])
			low_index = pos + 1;
		else
			high_index = pos - 1;
	}

	if (value == array[low_index])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[low_index]);

		return (low_index);
	}
	return (-1);
}
