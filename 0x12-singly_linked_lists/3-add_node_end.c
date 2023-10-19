#include "lists.h"

/**
 * add_node_end - add node
 *
 * @head: pointer
 * @str: no
 *
 * Return: number
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));
	list_t *m = *head;

	if (head == 0 || p == NULL)
		return (0);
	if (str)
	{
		p->str = strdup(str);
		if ((p->str) == 0)
		{
			free(p);
			return (0);
		}
		p->len = len(p->str);
	}
	if (m)
	{
		while (m->next)
			m = m->next;
		m->next = p;
	}
	else
		*head = p;
	return (p);
}
