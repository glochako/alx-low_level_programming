#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 * Return: 0 (Success), otherwise 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	int i;
	int sum = 0;
	for (i = 0; i < argc; i++)
	{
		int j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j])
			{
				printf("Error\n");
				return (1);
			}
		j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
