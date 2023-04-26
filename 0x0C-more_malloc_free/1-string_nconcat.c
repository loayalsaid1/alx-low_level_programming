#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string source
 * @s2: string destination
 * @n: number of bytes
 *
 * Return: NULL if function fails
 * pointer to newly allocated space in memory
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	if (n >= len2)
		n = len2;
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
