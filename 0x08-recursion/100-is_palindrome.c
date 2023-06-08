#include "main.h"
/**
 * _strlen_recursion - check for the len
 * @s: the string
 * Return:  the len.
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - check for a string being palindrome
 * @s1: right side checked char
 * @s2: left side checekd char
 * Return: final result, 1 or 0
 */
int checker(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (checker(s1 - 1, s2 + 1));
	return (0);
}
/**
 * is_palindrome - main function
 * @s: the string
 * Return: 1 for true, 0 for false
 */
int is_palindrome(char *s)
{
	int len, middle;

	len = _strlen_recursion(s);
	if (len == 0)
		return (1);
	middle = len / 2;
	if (len % 2 != 0)
		return (checker(s + middle - 1,	s + middle + 1));
	else
		return (checker(s + middle - 1, s + middle));
}
