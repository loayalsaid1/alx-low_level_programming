#include "main.h"

/**
 * main - Simulate bash command cp but without options
 *
 * @argc: The count of arguments
 * @argv: A list of arguments
 *
 * Return: 0 in success or exit if anything goes wrong
*/
int main (int argc, char *argv[])
{
	ssize_t file_1, file_2;
	ssize_t read_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		manage_errors("Usage: cp file_from file_to", 97);
	file_1 = open(argv[1], O_RDONLY);
	if (file_1 == -1 )
		manage_errors(_strcat("Error: Can't read from file", argv[1]), 98);
	file_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_2 == -1)
	{
		manage_errors(_strcat("Error: Can't write to %s", argv[2]), 99);
		close_file(file_1);
	}
	do
	{
		read_bytes = read(file_1, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			manage_errors(_strcat("Error: Can't read from file", argv[1]), 98);
			close_and_show_error(file_1, argv[1]);
			close_and_show_error(file_2, argv[2]);
		}
		if ((write(file_2, buffer, read_bytes)) == -1)
		{
			manage_errors(_strcat("Error: Can't write to ", argv[2]), 99);
			close_and_show_error(file_1, argv[1]);
			close_and_show_error(file_2, argv[2]);
		}
	} while (read_bytes == BUFFER_SIZE);
	close_file(file_1);
	close_file(file_2);

	return (0);
}

/**
 * _strcat - concatenates two strings
 * @src: string to copy
 * @dest: copied string
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}

/**
 * manage_errors - Print to standard_error a message and with exit an exit status
 *
 * @message: The error message
 * @exit_number: You still don't understand??!!
 *
 * Return: nothing
*/
void manage_errors(char *message, int exit_number)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_number);
}

/**
 * close_file - close a file and manage errors
 *
 * @file_descriptor: FD value
 *
 * Return: VOID
*/
void close_file(int file_descriptor)
{
	if (close(file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %i", file_descriptor);
		exit(100);
	}

}

/**
 * close_and_show_error - close a file and print an error message to stderr
 *
 * @file_descriptor: the FD value
 *
 * Return: VOID
*/
void close_and_show_error(int file_descriptor, char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s", file_name);
	close_file(file_descriptor);
}
