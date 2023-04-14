#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diaginal of a square
 * matrix of integers
 *
 * @a: pointer to matrix of integers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, diag_sum_1, diag_sum_2;

	diag_sum_1 = diag_sum_2 = 0;
	for (i = 0; i < size; i++)
	{
		diag_sum_1 += *(a + i * size + i);
		diag_sum_2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", diag_sum_1, diag_sum_2);
}
