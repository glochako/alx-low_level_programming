#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: the number to print factorial
 * Return: Always 0 (Success), or 1 (Error)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
