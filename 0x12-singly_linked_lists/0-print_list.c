#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the first node
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		nodes++;
	}

	return (nodes);
}
