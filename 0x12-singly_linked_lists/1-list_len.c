#include "lists.h"

/**
 * list_len - length of list
 *
 * @h: pointer
 *
 * Return: number
 *
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
