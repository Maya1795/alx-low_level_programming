#include "lists.h"

/**
 * free_dlistint - free adlist
 *
 * @head: pointer
 *
 * Return: void
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
