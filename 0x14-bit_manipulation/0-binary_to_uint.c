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

/**
 * binary_to_uint - convert binary into uint
 *
 * @b: the string contains the string
 *
 * Return: 0 in fail, or the final uint
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	result = 0;
	for (i = 0; i < len; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
