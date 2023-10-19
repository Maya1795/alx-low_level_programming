#include "lists.h"

/**
 * free_list - free list
 *
 * @head: pointer
 *
 * Return: number
 *
 */

void free_list(list_t *head)
{
	list_t *p, *m;

	if (head == 0)
		return;
	m = head;
	while (m)
	{
		p = m->next;
		free(m->str);
		free(m);
		m = p;
	}
}
