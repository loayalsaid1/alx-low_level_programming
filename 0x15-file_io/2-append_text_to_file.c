#include "main.h"
int _strlen(char *str);

/**
 * append_text_to_file - append text to a file opened via open system call
 *
 * @filename: The name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on sucess and if the fiel doesn't exist of on error ocurence
 * -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written_bytes;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written_bytes = write(fd, text_content, len);
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
 * _strlen - determine the length of the string
 *
 * @str: string to be processed
 *
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
