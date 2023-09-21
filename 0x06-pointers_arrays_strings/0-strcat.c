#include "main.h"

/**
 * *_strcat - concatenate 2 string
 *
 * @dest: pointer to dest input
 * @src: pointer to source input
 *
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
	{
		dest[c] = src[c2];
		c++;
	}
	return (dest);
}
