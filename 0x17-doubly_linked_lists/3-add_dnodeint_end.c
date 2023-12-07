#include "lists.h"

/**
 * add_dnodeint_end - add new element at the end
 *
 * @head: pointer address
 * @n: new node
 *
 * Return: adress of new one
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mnew = malloc(sizeof(dlistint_t));

	if (!head || mnew == NULL)
		return (mnew ? free(new), NULL : NULL);

	mnew->n = n;
	mnew->prev = NULL;
	if (!*head)
	{
		*head = mnew;
		mnew->next = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = mnew;
		mnew->prev = node;
	}
	return (mnew);
}
