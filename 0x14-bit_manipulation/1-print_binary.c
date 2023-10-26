#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0 && n == 0)
	{
		putchar('0');
		return;
	}
	if (n >> 1 != 0)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
