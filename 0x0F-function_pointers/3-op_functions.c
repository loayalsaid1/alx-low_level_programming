#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Calculates the sum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of multiplying a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates the division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}