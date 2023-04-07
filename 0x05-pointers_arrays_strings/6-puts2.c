#include "main.h"

/**
 * puts2 - print every even index in a string (
 * an array or characters)
 *
 * @str: the string to be processored
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
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
