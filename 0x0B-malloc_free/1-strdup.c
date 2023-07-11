#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: the string to be duplicated
 * Return: pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *p;
	int i, c;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc((i + 1) * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
		p[c] = str[c];

	return (p);
}
