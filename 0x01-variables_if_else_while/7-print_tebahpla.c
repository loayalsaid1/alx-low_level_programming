#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	int dec_ascii_a = 97;
	int dec_ascii_z = 122;
	int i = dec_ascii_z;

	while (i >= dec_ascii_a)
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
