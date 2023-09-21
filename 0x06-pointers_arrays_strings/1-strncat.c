#include "main.h"

/**
 * *_strncat - concatenate 2 string
 *
 * @dest: pointer dest input
 * @src: pointer source input
 * @n:no. of return
 *
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; c2 < n; c2++)
	{
		dest[c] = src[c2];
		c++;
	}
	return (dest);
}
