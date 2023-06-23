#include "main.h"

/**
 * print_square - Prints a square
 * @size - The size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i,j;
		
		for (i = 0; i < size; j++)
		{
		for ( j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
