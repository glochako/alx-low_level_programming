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

	for (i = 0; str[i] != '\0'; i++)

	p = malloc(i * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		p[c] = str[c];
	return (p);
}
