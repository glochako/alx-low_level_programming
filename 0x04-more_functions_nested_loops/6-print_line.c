#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: - The number of times (_) should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (n > 0 && i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
