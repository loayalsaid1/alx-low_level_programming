#include "main.h"


/**
 * _is_prime - check if number is a prime number
 *
 * @n: number to check if its a prime number
 * @i: Divider of n
 *
 * Return: 1 if n is a prime number, else 0
 */
int _is_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number to check if prime
 *
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_is_prime(n, 2));
}

