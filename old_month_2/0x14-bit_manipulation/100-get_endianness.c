#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 *
 */
int get_endianness(void)
{
	unsigned int x;
	char *p;

	x = 10;
	p = (char *) &x;

	if (*p)
		return (1);
	return (0);
}
