#include "main.h"

/**
 * leet - replace some letters with anothers
 *
 * @s: the strings
 * Return: the string itself
 */
char *leet(char *s)
{
	int i, j;
	char keys[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char values[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == keys[j])
			{
				s[i] = values[j / 2];
				break;
			}
		}
	}
	return (s);
}
