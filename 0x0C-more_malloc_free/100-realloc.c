#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 *
 * @ptr: pointer
 * @old_size: number
 * @new_size: number
 *
 * Return: pointer
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (0);
		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (0);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)m + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (m);
}
