#include "lists.h"


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
	int m;
	listint_t *p;

	if (h == NULL || *h == 0)
		return (0);
	while (*h)
	{
		m = *h - (*h)->next;
		if (m > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			c++;
		}
		else
		{
			free(*h);
			*h = NULL;
			c++;
			break;
		}
	}
	*h = NULL;
	return (c);
}


