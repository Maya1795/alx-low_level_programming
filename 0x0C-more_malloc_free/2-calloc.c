#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_s(char *m, char a, unsigned int n);
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
	void *f;

	if (nmemb == 0 || size == 0)
		return (0);
	f = malloc(sizeof(int) * nmemb);
	if (f == 0)
		return (0);
	_s(f, 0, sizeof(int) * nmemb);
	return (f);
}

/**
 * _s - fill bytes
 *
 * @m: const
 * @a: char
 * @n: number of max bytes
 *
 * Return: pointer
 *
 */

char *_s(char *m, char a, unsigned int n)
{
	while (n--)
		*m++ = a;
	return (m);
}
