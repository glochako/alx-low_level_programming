#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * including terminating the null byte (\0) to the buffer pointed by dest
 * @dest: - copy to
 * @src:- copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
