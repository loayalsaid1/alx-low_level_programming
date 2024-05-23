#include "search_algos.h"


/**
 * recursive_binary_search - Recursive binary search getting the first
 *	occurence of the target value
 * @array: The array
 * @value: The target value.
 * @left: The starting index
 * @right: The right index;
 * Return: The index of -1
*/
int recursive_binary_search(int *array, int value, size_t left,
	size_t right)
{
	size_t mid;

	if (array == NULL || left > right)
		return (-1);

	print_sub_array(array, left, right);
	mid = (left + right) / 2;

	if (array[mid] == value)
	{
		if (mid != 0 && array[mid - 1] == value)
			return (recursive_binary_search(array, value, left, mid));
		return (mid);
	}
	else if (value > array[mid])
		return (recursive_binary_search(array, value, mid + 1, right));
	else
		return (recursive_binary_search(array, value, left, mid));
}

/**
 * advanced_binary - Recursive binary search getting the first
 *		occurence of the target value
 * @array: The array
 * @size: the size the array.
 * @value: The target value.
 * Return: The index of -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);

	return (recursive_binary_search(array, value, 0, size - 1));
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
