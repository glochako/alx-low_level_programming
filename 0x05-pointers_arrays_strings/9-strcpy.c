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
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
