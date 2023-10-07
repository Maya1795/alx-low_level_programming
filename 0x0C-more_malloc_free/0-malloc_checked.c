#include "main.h"

/**
 * malloc_checked - allocate memory
 *
 * @b: number
 *
 * Return: pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (*p == NULL)
		exit(98);
	return (p);
}
