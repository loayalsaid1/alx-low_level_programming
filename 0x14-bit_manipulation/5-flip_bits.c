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
	unsigned long int temp = n ^ m, count = 0;

	while (temp > 0)
	{
		count += temp & 1;

		temp >>= 1;
	}
	return (count);
}
