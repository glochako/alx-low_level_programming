#include "main.h"

/**
 * _memcpy - function that copies a memory block
 * @dest: the destination folder
 * @src: the source folder
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
