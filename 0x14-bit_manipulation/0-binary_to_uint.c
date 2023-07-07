#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string to be processed
 *
 * ********** IMPORTANT NOTE: I THOUGH IT MAY
 * BE MORE BETTER IF I USE A COUNTER VARIABLE
 * BUT IT TURNED OUT THAT NO!
 *
 *
 * one more edit: i will change the i to make it
 * named counter, to have a middle ground
 * and make it more readable
 *
 * Return: lenth of string
 */
int _strlen(const char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	return (counter);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, power, value;
	int i, len;

	if (b == NULL)
		return (0);

	result = 0;
	power = 1;
	len = _strlen(b);
	if (len > 64)
		return (0);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		value = b[i] - '0';
		result += value * power;

		power *= 2;
	}

	return (result);
}
