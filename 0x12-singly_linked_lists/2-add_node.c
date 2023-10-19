#include "lists.h"

/**
 * add_node - add new node
 *
 * @head: pointer
 * @str: char
 *
 * Return: number
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (head == 0 || p == NULL)
		return (0);
	if (str)
	{
		p->str = strdup(str);
		if (!p->str)
		{
			free(p);
			return (0);
		}
		p->len = len(p->str);
	}
	p->next = *head;
	*head = p;
	return (p);
}
