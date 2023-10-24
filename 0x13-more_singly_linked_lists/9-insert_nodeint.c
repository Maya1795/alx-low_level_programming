#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 *
 * @head: pointer
 * @idx: index
 * @n: number
 *
 * Return: address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *m, *p;
	int i = 0;

	*p = malloc(sizeof(listint_t));
	if (head == NULL || *p == 0)
		return (0);
	p->n = n;
	p->next = NULL;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	m = *head;
	while (m)
	{
		if (i == idx - 1)
		{
			p->next = m->next;
			m->next = p;
			return (p);
		}
		i++;
		m = m->next;
	}
	free(p);
	return (0);
}
