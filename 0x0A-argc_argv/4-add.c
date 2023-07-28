#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks for digits in a string
 * @str: the array str
 * Return: always 0 (Success)
 */

int check_num(char *str)
{
	/* Declaring the variables */
	unsigned int count = 0;

	while (count < strlen(str)) /*counts the string */
	{
		if (!isdigit(str[count])) /* check for digit in string */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/* Declaring the variables */
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* Checks the whole array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* Convert string to int */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);/* prints the sum */

	return (0);
}

