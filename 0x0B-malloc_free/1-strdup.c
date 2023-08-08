#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: the string to be copied
 * Return: pointer to the duplicated string, NULL if the string is NULL
 */

char *_strdup(char *str)
{
	char *sss;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != 0)
		i++;
	sss = malloc(sizeof(char) * (i + 1));

	if (sss == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
		sss[r] = str[r];

	return (sss);
}
