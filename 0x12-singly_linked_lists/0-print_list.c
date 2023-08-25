#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: number of nodes, or [0] (nil) if str is NULL
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;/* the node count starts at 0*/

	while (h) /* iterates through the loop as long as h is not NULL*/
	{
		if (!h->str)/* would mean that the string is empty*/
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);/*prints the length of the string*/
		h = h->next;
		node_count++;
	}
	return (node_count);
}
