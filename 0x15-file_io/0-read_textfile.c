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
	ssize_t bytes_read;
	ssize_t bytes_writen;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);

	bytes_writen = write(STDOUT_FILENO, buffer, letters);
	free(buffer);
	close(fd);
	if (bytes_read != bytes_writen)
		return (0);
	return (bytes_writen);
}
