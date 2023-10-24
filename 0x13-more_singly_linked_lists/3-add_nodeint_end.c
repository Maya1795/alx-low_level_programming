#include "lists.h"

/**
 * add_nodeint_end - add node
 *
 * @head: pointer
 * @n: number
 *
 * Return: pointer
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *m, *p = malloc(sizeof(listint_t));

	if (head == NULL || p == 0)
		return (0);
	p->next = NULL;
	p->n = n;
	if (!*head)
		*head = p;
	else
	{
		m = *head;
		while (m->next)
		{
			m = m->next;
		}
		m->next = p;
	}
	return (p);

}
