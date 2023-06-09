#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - main fuction
 * @argc: count
 * @argv: argumets
 * Return: 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	int first_number, second_number, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first_number = atoi(argv[1]);
	second_number = atoi(argv[2]);
	result = first_number * second_number;
	printf("%i\n", result);
	return (0);
}
