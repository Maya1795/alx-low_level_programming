#include "lists.h"

listint_t *f(listint_t *head);
/**
 * free_listint_safe - free list
 *
 * @h: pointer
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	int m = 1;
	listint_t *p, *l;

	if (h == NULL || *h == 0)
		return (0);
	l = f(*h);
	for (c = 0; (*h != l || m) && *h != NULL; *h = p)
	{
		c++;
		p = (*h)->next;
		if (*h == l && m)
		{
			if (l == l->next)
			{
				free(*h);
				break;
			}
			c++;
			p = p->next;
			free((*h)->next);
			m = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (c);
}

/**
 * f - find loop
 *
 * @head: pointer
 *
 * Return: position
 *
 */
listint_t *f(listint_t *head)
{
	listint_t *p, *e;

	if (head == NULL)
		return (0);
	for (e = head->next; e != NULL; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (p = head; p != e; p = p->next)
		{
			if (p == e->next)
				return (e->next);
		}
	}
	return (NULL);
}
