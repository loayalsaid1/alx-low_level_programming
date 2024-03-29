#ifndef MAIN_H
#define MAIN_H

#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE
#define BUFFER_SIZE 1024

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *_strcat(char *dest, char *src);
void manage_errors(char *message, int exit_number);
void close_file(int file_descriptor);
void close_and_show_error(int file_descriptor, char *file_name);

#endif /*MAIN_H*/
