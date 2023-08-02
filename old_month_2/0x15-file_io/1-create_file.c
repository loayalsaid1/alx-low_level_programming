#include "main.h"

/**
 * _strlen - determine the length of the string
 * @str: string to be processed
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 in case of failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		lenght = _strlen(text_content);
	if ((write(fd, text_content, lenght)) == -1)
		return (-1);

	close(fd);

	return (1);
}
