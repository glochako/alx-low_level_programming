#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted number, otherwise 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n = (n << 1) | (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
