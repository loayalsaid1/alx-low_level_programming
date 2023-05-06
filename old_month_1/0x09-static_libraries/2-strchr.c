#include "main.h"
#define NULL 0

/**
 * _strchr - locates a chracter in a string
 *
 * @s: string to search
 * @c: character to locate
 *
 * Return:pointer to the first occurrence of the character c
 * in the string s else,
 * NULL if the character is not foud
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return ('\0');
}
