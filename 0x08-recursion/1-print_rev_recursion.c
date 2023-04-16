#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recusion
 *
 * @s: the string to be printed (a pointer to the first character of it)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
