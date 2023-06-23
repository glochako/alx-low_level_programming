#include <stdio.h>
#include "main.h"

/**
 * main - Prints numbers 1 to 100
 * Prints Fizz for multiples of 3,
 * Buzz for multiples of 5, and FizzBuzz for multiples of both 5 and 3
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf(" %d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
