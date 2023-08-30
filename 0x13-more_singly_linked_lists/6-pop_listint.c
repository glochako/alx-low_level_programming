#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first node of the list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
