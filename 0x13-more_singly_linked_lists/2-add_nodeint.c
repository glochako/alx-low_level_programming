#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a listint_t list
 * @head: the first node
 * @n: the integer value to be stored to be stored in the new node
 * Return: address of new node, NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
