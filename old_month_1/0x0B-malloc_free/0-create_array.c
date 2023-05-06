#include "main.h"
#include <stdlib.h>

/**
 * create_array - return a pointer to a created array & fill it with a char
 *
 * @size: the size of the array
 * @c: the char
 *
 * Return: Null of size = 0. Or a pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
