#include "main.h"

/**
 * clear_bit - sets the value of a but to 0 at a guven index
 * @n: the integer
 * @index: the index
 * Return: 1 (Success), or 0 (Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
