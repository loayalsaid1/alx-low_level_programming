#include "main.h"

/**
 * _strlen_recursion - returns the lengh of a string using recursion
 *
 * @s: the string to be measured
 *
 * Return: The length
 * WHAT IS COMMMING NEXT IS A CORRECT CODE BUT IN BETYY YOU CAN'T USE GLOBAL
 * VARS:
 *
 * int num = 0;
 *
 *	int _strlen_recursion(char *s)
 *	{
 *
 *		if (*s == '\0')
 *			return num;
 *		num++;
 *		_strlen_recursion(s + 1);
 *		return num;
 *	}
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
