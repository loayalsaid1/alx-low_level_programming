#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Check number of coins in a change
 * @argc: count of args
 * @argv: the array of args
 * Return: 0 on success and 1 in fail
 */
int main(int argc, char *argv[])
{
	int i;
	int remaining_change, coins, coins_per_value;
	int coins_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}

	remaining_change = atoi(argv[1]);
	coins = coins_per_value = 0;

	for (i = 0; i < 5; i++)
	{
		if (remaining_change >= coins_values[i])
		{
			coins_per_value = remaining_change / coins_values[i];
			coins += coins_per_value;
			remaining_change -= coins_per_value * coins_values[i];
		}
	}
	printf("%i\n", coins);

	return (0);
}




