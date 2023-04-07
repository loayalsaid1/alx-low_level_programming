#include "main.h"

/**
 * rev_string - recerse a string
 * @str: string to be reversed
 * this is an older version that don't work with
 * std 89
 * void rev_string(char *s)
 * {
 *	int i, j, len;
 *	char *tmp;
 *	len = _strlen(s);
 *	for (i = len, j = 0; i >= 0; i--, j++)
 *		tmp[j] = s[i];
 *	s = tmp;
 * }
 */
void rev_string(char *str)
{
	int i, len;
	char tmp;

	len = _strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
}

/**
 * _strlen - determine the length of the string
 * @str: string to be processed
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
