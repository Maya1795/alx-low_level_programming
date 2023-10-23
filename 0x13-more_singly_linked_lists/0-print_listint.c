#include "lists.h"

/**
 * print_listint - print all element
 *
 * @h: pointer
 *
 * Return: number
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
