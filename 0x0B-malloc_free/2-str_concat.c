#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to newly allocated space in memory with content s! and s2
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len1 + i] = s2[i];
	s[len1 + i] = '\0';
	return (s);
}
