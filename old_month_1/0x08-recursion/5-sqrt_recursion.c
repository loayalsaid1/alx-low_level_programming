#include "main.h"

/**
 * find_sqrt - find the square root
 *
 * @n: number to be searched
 * @r: the potintial root to be checked
 *
 * Return: the square root of -1 if there is no natural one
 */
int find_sqrt(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (find_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - return the square root of N or -1 if there is no
 * natural one
 *
 * @n: the squared number to find it's square root
 * Return: The square root if exitsts, otherwise 01
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
