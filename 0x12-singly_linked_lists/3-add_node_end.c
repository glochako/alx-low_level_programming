#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end -adds new node at the end of a list_t list
 * @head: the first node of the string
 * @str: the string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temporary = *head;
	unsigned int len = 0;
	
	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temporary->next)
		temporary = temporary->next;

	temporary->next = new;
	
	return (new);
}
