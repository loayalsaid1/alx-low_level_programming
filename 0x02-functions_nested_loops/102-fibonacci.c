#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers,
 * Return: 0 (success)
 */

int main(void)
{
	int counter = 3;
	long int tmp1 = 1;
	long int tmp2 = 2;
	long int tmp3 = 3;

	printf("1, 2, ");

	while (counter < 50)
	{
		printf("%ld, ", tmp3);

		tmp1 = tmp2;
		tmp2 = tmp3;
		tmp3 = tmp1 + tmp2;

		counter++;
	}
	printf("%ld\n", tmp1 + tmp2);
	return (0);
}
