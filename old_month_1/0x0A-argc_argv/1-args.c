#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguements passed into it
 *
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
