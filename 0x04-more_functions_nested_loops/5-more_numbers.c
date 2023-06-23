#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0 to 9
 * Except 2 and 4
 */

void print_most_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '10'; i++)
	{
		for (j = '0'; j <= '14'; j++)
			if (j >= '10')
			{
				_putchar('1');
			_putchar(j % 10 + '0');
			}
	}
	_putchar('\n');
}	
