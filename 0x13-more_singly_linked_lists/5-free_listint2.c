#include "lists.h"

/**
 * free_listint2 - free list
 *
 * @head: pointer
 *
 * Return: nothing
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *m, *s;

	if (head == NULL)
		return;
	m = *head;
	while (m)
	{
		s = m;
		m = m->next;
		free(s);
	}
	*head = NULL;
}
