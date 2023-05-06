#include "main.h"

/**
 * _pow_recursion - return the integer x reised to the power of y
 *
 * @x: the integer
 * @y: the power
 *
 * Return: the result or -1 if y is lower than 0 and x if y = 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, --y));
}
