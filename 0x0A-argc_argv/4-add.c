#include <ctype.h>
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
	int result, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	result = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%i\n", result);
	return (0);
}
