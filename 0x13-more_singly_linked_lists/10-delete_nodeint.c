#include "lists.h"

/**
 * delete_nodeint_at_index - delete
 *
 * @head: pointer
 * @index: number of node
 *
 * Return: nothing
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *m, *p;
	unsigned int i = 0;

	if (head == NULL || *head == 0)
		return (-1);
	if (index == 0)
	{
		m = *head;
		*head = (*head)->next;
		free(m);
		return (1);
	}
	m = *head;
	while (m)
	{
		if (i == index)
		{
			p->next = m->next;
			free(m);
			return (1);
		}
		i++;
		p = m;
		m = m->next;
	}
	return (-1);
}
