#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t s = 0;

	if (!h)
		return (0);

	while (curr)
	{
		if (curr->str)
			printf("[%d] %s\n", curr->len, curr->str);
		else
			printf("[0] (nil)\n");
		curr = curr->next;
		s++;
	}
	return (s);
}
