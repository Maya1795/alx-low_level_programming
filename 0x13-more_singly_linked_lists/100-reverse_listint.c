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
	listint_t *p = NULL, *m = NULL;

	if (head == NULL || *head == 0)
		return (0);
	p = *head;
	*head = NULL;
	while (p)
	{
		m = p->next;
		p->next = *head;
		*head = p;
		p = m;
	}
	return (*head);
}
