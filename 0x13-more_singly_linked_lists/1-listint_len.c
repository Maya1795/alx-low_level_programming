#include "lists.h"

/**
 * listint_len - number of element
 *
 * @h: pointer
 *
 * Return: number
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
