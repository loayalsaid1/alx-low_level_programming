#include "main.h"

/**
 * print_diagonal - Drawsa diagonal line on terminal
 * @n: number of lines
 */
void print_diagonal(int n)
{
	int lines = n;
	int i, j, spaces;

	if (lines <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < lines; i++)
	{
		spaces = i;

		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
