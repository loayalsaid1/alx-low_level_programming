#include <stdlib.h>
#include "main.h"

/**
 * count_words - count the words in the string
 * @string: the string to be word-counted
 * Return: the count of the words, of 0 if all characters are spaces
 */
int count_words(char *string)
{
	int i, counter;

	i = counter = 0;
	if (string[i] != ' ')
	{
		counter++;
		i++;
	}

	for (i = 1; string[i] != '\0'; i++)
	{
		if (string[i] == ' ')
			continue;
		if ((string[i] != ' ') && (string[i - 1] == ' '))
			counter++;
	}
	return (counter);
}

/**
 * count_chars - count the comming word characters to allocate memory for them
 * @string: the string to check its words
 * Return: Count of characters
 */
int count_chars(char *string)
{
	int counter = 0;

	while ((*string != ' ') && (*string != '\0'))
	{
		counter++;
		string++;
	}
	return (counter);
}

/**
 * strtow - split a string into words, all in spereated dynamically
 * allocated buffer
 * @str: the string
 * Return: the final result or null when there are errors of empty string
 */
char **strtow(char *str)
{
	char **matrix;
	int i, j, words_count, chars_count;
	char *tmp_str;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words_count = count_words(str);
	if (words_count == 0)
		return (NULL);
	matrix = malloc(sizeof(char *) * (words_count + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < words_count; i++)
	{
		while (1)
		{
			if (*str == ' ')
				str++;
			else
				break;
		}
		tmp_str = str;
		chars_count = count_chars(tmp_str);
		matrix[i] = malloc(sizeof(char) * (chars_count + 1));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < chars_count; j++)
		{
			matrix[i][j] = str[0];
			str++;
		}
		matrix[i][j] = '\0';
	}
	matrix[i] = NULL;
	return (matrix);
}
