#include <stdio.h>

/**
 * main - Print lowercase alphabet with no e or q
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
		if ((i == 113) || (i == 101))
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}

	printf("\n");

	return (0);
}
