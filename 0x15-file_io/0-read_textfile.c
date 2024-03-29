#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_bytes, written_bytes;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
		return (0);

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes != read_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (written_bytes);
}
