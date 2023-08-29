#include "function_pointers.h"

/**
 * int_index - function that returns the index of the first element of an array
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 * Return: 0, or -1 if no matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	       return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
