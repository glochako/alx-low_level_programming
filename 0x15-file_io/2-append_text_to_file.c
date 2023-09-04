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

