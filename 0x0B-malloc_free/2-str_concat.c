#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to space in memory with new contents
 * Return: new string (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i;
	int c;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	new_string = malloc(sizeof(char) * len);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_string[c++] = s1[i];
	for (i = 0; s2[i]; i++)
		new_string[c++] = s2[i];

	return (new_string);
}
