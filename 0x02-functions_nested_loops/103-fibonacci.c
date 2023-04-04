#include <stdio.h>

/**
 * main - Entry point
 * Description: Finds and prints the sum of the even-valued terms.
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int first = 1, second = 2, next, sum = 2;

	for (i = 2; i <= 33; i++)
	{
		next = first + second;
		if (next % 2 == 0)
			sum += next;
		first = second;
		second = next;
	}

	printf("%ld\n", sum);
	return (0);
}
