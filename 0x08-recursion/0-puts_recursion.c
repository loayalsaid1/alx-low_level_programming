#include "main.h"
/*
 * _puts_recursion - provides a similar function to  puts
 * s: the string
 * return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
