#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated space in memory
 *
 * @str: string to copy
 *
 * Return: NULL if str = NULL or  if insufficient is available
 * pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *new;
	int i, j, len;

	if (str == NULL)
		return (NULL);


	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	len = i;

	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
		new[j] = str[j];

	return (new);
}
