#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory and check if the proccess succeed
 *
 * @b: the size of the buffer
 * Return: a pointer to the buffer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
