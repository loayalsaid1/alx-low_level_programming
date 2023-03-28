#include <stdio.h>

/**
 * main - Print the hex digits
 *
 * Return: 0 (success)
 */
int main(void)
{

	int ascii_0 = 48;
	int ascii_9 = 57;
	int ascii_a = 97;
	int ascii_f = 102;
	int i = ascii_0;

	while (i <= ascii_9)
	{
		putchar(i);
		i++;
	}
	i = ascii_a;
	while (i <= ascii_f)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
