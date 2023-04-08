#include "main.h"

/**
 * cap_string - capetalising the words after teh separators
 *
 * @s: the string that will be proccesed
 *
 * Return: the string after getting done
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[15] = {' ', '\t', '\n', ',', ';', '.', '!',
	'?', '\"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (s[i - 1] == separators[j] && (s[i] <= 122 && s[i] >= 97))
				s[i] -= 32;
		}
	}
	return (s);
}
