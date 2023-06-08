#include "main.h"
/**
 * check_primes - check more things
 * @number: the number to be checked
 * @divided_number: the variable number to check if it can evenly
 * devide checked number
 * Return: 1 or 0
 */
int check_primes(unsigned int number, unsigned int divided_number)
{
	if ((number % divided_number) == 0)
		return (0);
	if (divided_number == 2)
		return (1);
	return (check_primes(number, divided_number - 1));
}

/**
 * is_prime_number - return the final result and make initial checks
 * @n: the checked number
 * Return: Final result (0 or 1)
 */
int is_prime_number(int n)
{
	if ((n <= 1) || ((n % 2) == 0))
		return (0);
	if ((n == 2) || (n == 3))
		return (1);
	return (check_primes(n, (n / 2)));
}
