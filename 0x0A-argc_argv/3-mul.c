#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 (Success), otherwise 1 (Error)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc != 3) /*2 numbers, plus the name of the program */
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
