#include "main.h"

/**
 * _memset - sets a specific byte in the first N bytes of a buffer in memory
 *
 * @s: the string to be modified
 * @b: the byte to be filled out with
 * @n: the first N bytes to be filled
 *
 * Return: A pointer to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
