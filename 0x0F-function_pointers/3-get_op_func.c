#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Function pointer that selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator given by the user.
 *
 * Return: Pointer to the function that corresponds to the
 * operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].f != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}