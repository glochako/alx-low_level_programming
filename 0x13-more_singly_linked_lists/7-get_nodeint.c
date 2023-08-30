#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: address of the first node of a list
 * @index: index of the node
 * Return: the node, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temporary = head;
	unsigned int i = 0;

	while (temporary && i < index)
	{
		temporary = temporary->next;
		i++;
	}
	return (temporary ? temporary : NULL);
	/*if temp=NULL, remain temp, if NULL, print NULL */
}
