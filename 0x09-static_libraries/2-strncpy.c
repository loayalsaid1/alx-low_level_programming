#include "main.h"

/**
 * _strncpy - copy the first N bytes from string
 * into the first string
 *
 * @dest: the string will be edited
 * @src: the source of the copied bytes
 * @n: the number of bytes
 *
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	if (i < n)
	{
		for (; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
