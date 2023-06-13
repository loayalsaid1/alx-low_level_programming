#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string to be processed
 *
 * ********** IMPORTANT NOTE: I THOUGH IT MAY
 * BE MORE BETTER IF I USE A COUNTER VARIABLE
 * BUT IT TURNED OUT THAT NO!
 *
 *
 * one more edit: i will change the i to make it
 * named counter, to have a middle ground
 * and make it more readable
 *
 * Return: lenth of string
 */
int _strlen(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	return (counter);
}

/**
 * char *str_concat - concatinate copies of 2 strings in a \n
 * new dynamicly allocated memory buffer
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the buffer or Null if no memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, size;
	char *buffer;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	size = len1 + len2 + 1;

	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		buffer[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		buffer[i] = s2[j];
	}
	buffer[i] = '\0';

	return (buffer);
}
