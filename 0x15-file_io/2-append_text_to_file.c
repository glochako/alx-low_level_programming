#include "main.h"

/**
 *  append_text_to_file - appends text at the end of a file
 *  @filename: the file
 *  @text_content: text to be appended
 *  Return: 1 (Success), otherwise 0 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	wr = write(fp, text_content, len);

	if (fp == -1 || wr == -1)
		return (-1);

	close(fp);

	return (1);
}
