#include <stdlib.h>
#include "main.h"

/**
 *  malloc_checked - allocate memory and exit normally in error ocurence
 *  @b: size of the buffer
 *  Return: a pointer to the buffer
 */
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
		exit(98);

	return (buffer);
}
