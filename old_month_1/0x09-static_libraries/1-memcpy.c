#include "main.h"

/**
 * _memcpy - copy the first n bytes from src buffer into the first n bytes
 * in dest
 *
 * @dest: destination buffer
 * @src: src buffer
 * @n: number of bytes
 *
 * Return: pointer fo the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
