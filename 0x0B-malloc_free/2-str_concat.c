#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to space in memory with new contents
 * Return: new string (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i;
	int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;

	new_string = malloc(sizeof(char) * (i + c + 1));

	if (new_string == NULL)
		return (NULL);

	i = c = 0;
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		new_string[i] = s2[c];
		i++;
		c++;
	}
	new_string[i] = '\0';
	return (new_string);
}
