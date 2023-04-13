#include "main.h"
#define NULL 0

/**
 * _strstr - finds the first occurance of the substring needle in the haystack
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of located substring
 * else NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	for (len = 0; needle[len] != '\0'; len++)
		;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == '\0')
			return (haystack);

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (j == (len - 1))
				return (&haystack[i]);
		}
	}
	return (NULL);
}
