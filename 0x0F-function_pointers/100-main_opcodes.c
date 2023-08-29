#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int no_bytes, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_bytes = atoi(argv[1]);

	if (no_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < no_bytes; i++)
	{
		if (i == no_bytes - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
