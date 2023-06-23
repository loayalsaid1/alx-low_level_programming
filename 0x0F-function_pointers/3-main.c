#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Program that performs simple operations
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int n1, n2;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    n1 = atoi(argv[1]);
    n2 = atoi(argv[3]);

    if (get_op_func(argv[2]) == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%i\n", get_op_func(argv[2])(n1, n2));
    return (0);
}