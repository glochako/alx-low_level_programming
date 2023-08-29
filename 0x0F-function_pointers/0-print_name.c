#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name using a pointer to a function
 * @name: the name to be printed
 * @f: pointer to function
 * Return: printed string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
