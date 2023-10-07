#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creat array
 *
 * @min: start value
 * @max: end value
 *
 * Return: array
 *
 */

int *array_range(int min, int max)
{
	int l, i, *p;

	if (min > max)
		return (0);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (0);
	for (i = 0; i < l; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
