#include "lists.h"

/**
 * add_nodeint - add node
 *
 * @head: pointer
 * @n: new node
 *
 * Return: pointer
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (head == NULL || p == 0)
		return (0);
	p->next = NULL;
	p->n = n;
	if (*head)
		p->next = *head;
	*head = p;
	return (p);
}
