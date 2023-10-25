#include "lists.h"

/**
 * find_listint_loop - find list
 *
 * @head: pointer
 *
 * Return: position of node
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *m;

	if (!head)
		return (0);
	for (m = head->next; m != NULL; m = m->next)
	{
		if (m == m->next)
			return (m);
		for (p = head; p != m; p = p->next)
		{
			if (p == m->next)
				return (m->next);
		}
	}
	return (0);
}
