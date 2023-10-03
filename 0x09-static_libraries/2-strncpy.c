#include "main.h"

/**
 * *_strncpy - copy
 *
 * @dest: pointer dest input
 * @src: pinter source input
 * @n: bytes of 0src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
