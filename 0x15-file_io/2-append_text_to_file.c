#include "main.h"

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

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND| O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
