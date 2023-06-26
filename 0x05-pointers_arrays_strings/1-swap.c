#include "main.h"

/**
 * swap_int - Swaps the values of two ints
 * @a: - The int to be swapped
 * @b: The int to be swapped
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
