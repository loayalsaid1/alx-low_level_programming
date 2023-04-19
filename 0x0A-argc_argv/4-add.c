#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - returns the sum of numbers given as command line arguments
 *
 * @argc: the count of argv
 * @argv: the array of arguments
 *
 * discription: prints the sum of there are arguments, 0 if none given or
 * "Error" if there is a non-digit value given
 *
 * Return: 0 or 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	result = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
}
