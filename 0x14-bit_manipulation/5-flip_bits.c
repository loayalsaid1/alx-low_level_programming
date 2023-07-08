#include "main.h"

/**
 * flip_bits - check the number of flipped bits in the process of changing
 * the value of an int to another
 *
 * @n: the first number
 * @m: the second one
 *
 * Return: and count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, value;

	value = n ^ m;
	count = 0;

	while (value > 0)
	{
		if (value & 1)
			count++;

		value = value >> 1;
	}

	return (count);
}
