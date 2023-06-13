#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array dinamicly and then initialize it
 * @size: the size of the array
 * @c: the chareacter to initialize the array with
 * Return: Null if allocation fails or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (array);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
