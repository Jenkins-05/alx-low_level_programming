#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - eads a text file and prints it to the POSIX STDOUT
 * @filename:file being read
 * @letters:number of letters read
 * Return:actual number of letters it could read and print
 * if filename is NULL return 0
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileRead;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	char *buffer;

	fileRead = open(filename, O_RDONLY);
	if (fileRead == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	bytesRead = read(fileRead, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	close(fileRead);
	free(buffer);
	return (bytesWritten);
}
