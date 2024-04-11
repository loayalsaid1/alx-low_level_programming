#include "search_algos.h"


/**
 * binary_search - The binary search algorimthm
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched
 * Return: NULL if value is not present or array is NULL,
 *      the resutl otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int mid, right, left, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = (int) size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
