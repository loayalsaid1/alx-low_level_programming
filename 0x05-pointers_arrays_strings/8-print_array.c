#include <stdio.h>
#include "main.h"

/**
 * print_array - print the first N intergers
 * from an array.
 *
 * @a: the array
 * @n: the number of printed integers
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	putchar('\n');
}
