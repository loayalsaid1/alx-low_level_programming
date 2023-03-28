#include <stdio.h>

/**
 * main - Print lowercase and uppercase of aphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
	int dec_ascii_a = 97;
	int dec_ascii_z = 122;
	int dec_ascii_A = 65;
	int dec_ascii_Z = 90;
	int i;

	i = dec_ascii_a;
	while (i <= dec_ascii_z)
	{
		putchar(i);
		i++;
	}

	i = dec_ascii_A;
	while (i <= dec_ascii_Z)
	{
		putchar(i);
		i++;
	}

	printf("\n");

	return (0);
}
