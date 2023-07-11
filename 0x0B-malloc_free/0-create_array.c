#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and assigns char c
 * @c: the char to be returned
 * @size: size of array
 * Return: pointer to the array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(*p));

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
