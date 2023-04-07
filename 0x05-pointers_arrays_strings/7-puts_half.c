#include "main.h"

/**
 * puts_half - prints second half of a string
 * followed by a new line
 * Description: if the number of characters are odd
 * the function will print the last n characters
 * where n=(length_of_the_string - 1) / 2
 * @str: string to be processed
 */
void puts_half(char *str)
{
	int i, j, len, starting_index;

	for (i = 0; str[i] != '\0'; i++)
		;

	len = i;
	starting_index = len % 2 == 0 ? len / 2 : (len + 1) / 2;
	for (j = starting_index; j < len; j++)
		_putchar(str[j]);
	_putchar('\n');
}
