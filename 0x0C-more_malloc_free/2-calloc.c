#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory of array
 *
 * @nmemb: number
 * @size: number of size
 *
 * Return: pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(size * nmemb);
	if (f == 0)
		return (0);
	nmemb *= size;
	while (nmemb--)
		f[nmemb] = 0;
	return (f);
}
