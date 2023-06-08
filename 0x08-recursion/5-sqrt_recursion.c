#include "main.h"
/**
 * check_sqrt - check for the square root)
 * @x: the number
 * @y: the tried values
 * Return: square root or -1.
 */
int check_sqrt(int x, int y)
{
	if ((y * y) == x)
		return (y);
	if (y >= (x / 2))
		return (-1);
	return (check_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (check_sqrt(n, 2));
}
