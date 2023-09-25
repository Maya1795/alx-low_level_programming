#include "main.h"

/**
 * _memset - fills memory
 *
 * @s: pointer
 * @b: const byte
 * @n: number of bytes
 *
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
