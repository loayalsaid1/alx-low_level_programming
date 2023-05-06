#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to search
 * @accept: bytes
 *
 * Return: number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, result;

	for (i = 0; s[i] != '\0'; i++)
	{
		result = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result = 1;
				break;
			}
		}
		if (!(result))
			return (i);
	}
	return (0);
}
