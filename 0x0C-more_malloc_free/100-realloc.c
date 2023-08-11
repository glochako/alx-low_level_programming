#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a space in memory using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated memory
 * @new_size: size of the new memory
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (!new_size)
		return (NULL);
	old_ptr = new_ptr;;
	
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
