#include "lists.h"

/**
 * add_dnodeint - add new head
 *
 * @head: pointer address
 * @n: new node
 *
 * Return:  address of the new element
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		mnew->next = *head;
		(*head)->prev = mnew;
		*head = mnew;
	}
	return (mnew);

}
