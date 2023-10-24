#include "lists.h"

/**
 * pop_listint - delete head node
 *
 * @head: pointer
 *
 * Return:head node
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *m;
	int c;

	if (head == NULL || *head == 0)
		return (0);
	m = (*head)->next;
	c = (*head)->n;
	free(*head);
	*head = m;
	return (c);
}
