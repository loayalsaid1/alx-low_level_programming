#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int value;

	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	value = (*n) & (~(1 << index));
	return (value);
}
