#include "search_algos.h"


/**
 * binary_search - implement binary search on an array of ints
 * @array: The array
 * @size: Array size
 * @value: The target
 * Return: The index if possible, and -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_sub_array(array, left, right);

		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}

	return (-1);
}


/**
 * print_sub_array - print an sub array from a bigger one
 * @array: The array
 * @left: The starting index
 * @right: The right index;
 * Return: Void
*/
void print_sub_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (left > right)
		return;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%i, ", array[i]);
	}

	printf("%i\n", array[i]);
}
