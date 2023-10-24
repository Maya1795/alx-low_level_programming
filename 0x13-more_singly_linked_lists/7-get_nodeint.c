#include "lists.h"

/**
 * get_nodeint_at_index - get node
 *
 * @head: pointer
 * @index: number of node
 *
 * Return: number
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *m;
	unsigned int c = 0;

	for (m = head; m && c < index; c++)
		m = m->next;
	return (m);
}
