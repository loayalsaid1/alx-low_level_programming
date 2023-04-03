#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a' ; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
