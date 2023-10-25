#include "lists.h"

/**
 * reverse_listint - reverse list
 *
 * @head: pointer
 *
 * Return: first node pointer
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *m;

	while (*head)
	{
		m = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = m;
	}
	*head = p;
	return (*head);
}
