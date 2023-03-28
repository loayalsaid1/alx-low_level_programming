#include <stdio.h>

/**
 * main - Print lowercase alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	int dec_ascii_a = 97;
	int dec_ascii_z = 122;
	int i = dec_ascii_a;

	while (i <= dec_ascii_z)
	{
		putchar(i);
		i++;
	}

	printf("\n");

	return (0);
}
