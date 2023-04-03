#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the times table
 * with values available from 0 to 15
 *
 * @n: the number of the most times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;
	int max_char = 3;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d", result);
			else
				printf(", %*d", max_char, result);
		}
		printf("\n");
	}
}
