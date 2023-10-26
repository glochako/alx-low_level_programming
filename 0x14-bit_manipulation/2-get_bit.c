#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index starting from 0 of the but you want to get
 * @n: bit to be checked
 * Return: index, or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
