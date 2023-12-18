#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *make_buffer(char *file);
void exit_file(int fd);

/**
 * make_buffer - craetes a buffer of  1024 bytes
 *
 * @file: pointer to a file
 *
 * Return: newly allocated pointer
 *
 */

char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

