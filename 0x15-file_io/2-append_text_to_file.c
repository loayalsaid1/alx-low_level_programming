#include "main.h"

/**
 * append_text_to_file - append text to a file opened via open system call
 *
 * @filename: The name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on sucess and if the fiel doesn't exist of on error ocurence
 * -1
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
			close(fd);
			return (-1);
	}
	close(fd);
	return (1);
}
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len;
	int write_len;

	file = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		write_len = write(file, text_content, len);
	}
	if (write_len == -1)
		return (-1);
	close(file);
	return (1);
}
