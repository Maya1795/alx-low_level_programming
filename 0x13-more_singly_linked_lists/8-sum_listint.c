#include "lists.h"

/**
 * sum_listint - sum date
 *
 * @head: pointer
 *
 * Return: sum
 *
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
