#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept
 *
 * @s: the string to be searched
 * @accept: the set of bytes to search from
 *
 * Return: location of the first occurence of NULL (0) if there is no occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (0);
}
