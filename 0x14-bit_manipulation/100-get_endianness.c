#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int q = 2;

	if (q & 1)
		return (0);
	else
		return (1);
}
