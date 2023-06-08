#include "main.h"
/**
 * _print_rev_recursion - provides a similar function to  puts
 * @s: the string
 * return: void
 */
void _print_rev_recursion(char *s)
{
        if (s[0] == '\0')
        {
                _putchar('\n');
                return;
        }
        _puts_recursion(s + 1);
	_putchar(s[0]);
}
