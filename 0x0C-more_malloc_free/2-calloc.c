#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 *
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)pointer + i) = 0;
	return ((void *) pointer);
}
