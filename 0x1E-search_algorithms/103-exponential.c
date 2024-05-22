#include "search_algos.h"


/**
 * exponential_search - Expnential search for int array
 * @array: the array
 * @size: the size of the array
 * @value: the search value
 * Return: The index if possibel; -1 otherwise
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, upper_pound;

	if (array == NULL || size < 1)
		return (-1);

	if (value == array[0])
		return (0);


	for (i = 1; i < size && array[i] <= value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return ((int) i);
	}

	if (i < size)
		upper_pound = i;
	else
		upper_pound = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n",
		i / 2, upper_pound);

	return (sub_array_binary_search(array, value, i / 2, upper_pound));
}


/**
 * sub_array_binary_search - implement binary search on an sub_array  of ints
 * @array: The array
 * @value: The target
 * @left: The start of the array
 * @right: The end of the array
 * Return: The index if possible, and -1 otherwise
*/
int sub_array_binary_search(int *array, int value,
	size_t left, size_t right)
{
	size_t middle;


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
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
