#include "main.h"

/**
 * set_bit - sets the values of a bit to 1 at a given index
 * @n: pointer to the integer to change
 * @index: index of the bit to change
 * Return: 1 (Success), otherwise, -1 (Failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
