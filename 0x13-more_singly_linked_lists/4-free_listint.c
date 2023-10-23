#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer
 *
 * Return: number
 *
 */

void free_listint(listint_t *head)
{
	listint_t *m;

	while (head)
	{
		m = head;
		head = head->next;
		free(m);
	}
}
