#include "main.h"
#include <stdlib.h>

/**
 *  read_textfile - reads a text file and prints it to the standard output
 *  @filename: the file
 *  @letters: the number of letters it should read and print
 *  Return: number of letters, or 0 if filename cannot be opened
 *  0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t op;
	ssize_t wr;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	op = read(fp, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, op);

	free(buffer);
	close(fp);
	return (wr);
}
