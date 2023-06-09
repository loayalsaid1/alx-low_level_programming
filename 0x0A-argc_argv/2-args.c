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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
