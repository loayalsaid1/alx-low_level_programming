#include "main.h"

/**
 * binary_to_uint - Returns and decimal represintation of a binary number given
 * in a string
 *
 * @b: the string
 *
 * Return: 0 on errors occurence and the number on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (validate_string(b))
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;

		if (b[i] == '1')
			result += 1;
	}

	return (result);
}

int validate_string(const char *given)
{
	int i;

	if (given == NULL)
		return (1);

	for (i = 0; given[i] != '\0'; i++)
	{
		if (given[i] != '0' && given[i] != '1')
			return (1);
	}

	return (0);
}
