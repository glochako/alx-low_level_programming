#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: pointer to the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
