#include <stdio.h>

/**
 * main - print 10 single digits with putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ascii_0 = 48;
	
	int i = ascii_0;
	while (i < (ascii_0 + 10))
	{
		putchar(i);
		i++
	}
	putchar('\n');

	return (0);
}
