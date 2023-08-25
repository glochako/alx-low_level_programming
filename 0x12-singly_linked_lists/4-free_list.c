#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: node that points to the list
 */

void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
