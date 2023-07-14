#ifndef MAIN_H
#define MAIN_H

#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

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


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char*filename, char *text_content);


#endif /*MAIN_H*/
