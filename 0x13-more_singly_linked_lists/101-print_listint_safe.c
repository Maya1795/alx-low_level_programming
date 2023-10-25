#include "lists.h"

/**
 * _g - memory of array
 *
 * @l: pointer
 * @s: size
 * @n: new
 *
 * Return: pointer
 *
 */
const listint_t **_g(const listint_t **l, size_t s, const listint_t *n)
{
	const listint_t **p;
	size_t i;

	p = malloc(s * sizeof(listint_t *));
	if (p == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		p[i] = l[i];
	p[i] = n;
	free(l);
	return (p);
}

/**
 * print_listint_safe - print list
 *
 * @head: pointer
 *
 * Return: number of node
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **l = NULL;

	while (head != 0)
	{
		for ( i = 0; i < n; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (n);
			}
		}
		n++;
		l = _g(l, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (n);
}
