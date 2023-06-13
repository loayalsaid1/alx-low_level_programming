#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string into dynamicly allocated buffer
 * @str: the string
 * Return: Null if no srt or no enough memory, or a pointer to the buffer
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *buffer;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		buffer[i] = str[i];
	}

	return (buffer);
}
