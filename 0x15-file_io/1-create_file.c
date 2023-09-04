#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 (Success), or -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fp, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fp, text_content, len);

	if (fp == -1 || wr == -1)
		return (-1);

	close(fp);
	return (1);
}
