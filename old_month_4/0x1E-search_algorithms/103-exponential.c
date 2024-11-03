#include "search_algos.h"

/**
 * exponential_search - implement exponential search algorithm
 * @array: the array to be searced
 * @size: size of the array
 * @value: the search value
 * Return: -1 if not exists; the index otherwise
*/
int exponential_search(int *array, size_t size, int value)
{
	int i, left, right, index;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	i = 1;
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		i = i * 2;
	}

	left = i / 2;
	right = i < (int)size ? i : (int) size - 1;
	printf("Value found between indexes [%i] and [%i]\n", left, right);
	index = binary_search(&(array[left]), right - left + 1, value);
	if (index == -1)
		return (-1);
	else
		return (index + left);
}


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
