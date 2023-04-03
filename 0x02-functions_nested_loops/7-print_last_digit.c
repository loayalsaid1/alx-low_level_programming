#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @num: integer to be processed
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	int digit;

	digit = num % 10;
	if (digit < 0)
		digit *= -1;
	_putchar('0' + digit);
	return (digit);
}

