#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: array to be printed
 * @n: number of elements within the array to be printed
 * Return: inputs a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
		printf("\n");
}
