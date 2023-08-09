#include "main.h"

/**
 * append_text_to_file - Append text to file if it exists and have the
 * right  permissions
 *
 * @filename: The file name!
 * @text_content: Text content!
 *
 * Return: 1 on success and -1on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t foo = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		foo = write(fd, text_content, strlen(text_content));

	close(fd);
	if (foo == -1)
		return (-1);
	else
		return (1);
}
