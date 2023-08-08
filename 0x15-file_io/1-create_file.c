#include "main.h"

/**
 * create_file - Create a file with certain permissions and fill it
 * and if it does exist only trancate it before filling it
 *
 * @filename: The file name!
 * @text_content: A string to fill the file
 *
 * Return: 1 on success
 * -1 on errors
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t foo;
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);

		foo = write(fd, text_content, len);
		if (foo == -1)
		{
			close(fd);

			return (-1);
		}

		close(fd);

		return (1);
	}

	close(fd);

	return (1);
}
