#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creat array of char
 *
 * @size: array size
 * @c: char
 *
 * Return: pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == NULL)
		return (0);
	while (size--)
		m[size] = c;
	return (m);
}
