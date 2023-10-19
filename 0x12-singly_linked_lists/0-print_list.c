#include "lists.h"

/**
 * len - length of string
 *
 * @m: string
 *
 * Return: length
 *
 */

int len(char *m)
{
	int i = 0;

	if (!m)
		return (0);
	while (*m++)
		i++;
	return (i);
}

/**
 * print_list - print list of string
 *
 * @h: pointer
 *
 * Return: number
 *
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
