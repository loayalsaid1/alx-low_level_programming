#include "main.h"
#include <stdio.h>

/**
 * main - print the passed arguments to it
 *
 * @argc: number of args
 * @argv: array contains args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
