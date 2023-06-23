#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: - The number of times (_) should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
		
		for (i = 1; i <= 10; i++)
		{
			_putchar('_');
		}
		_putchar('_');
	}
}
