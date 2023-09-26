#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of 2 diagional square
 *
 * @a: array of 2d
 * @size: array size
 *
 */

void print_diagsums(int *a, int size)
{
	int i, m = 0, s = 0;

	for (i = 0; i < size; i++)
	{
		m += a[i];
		s += a[size - i - 1];
		a += size;
	}
	printf("%d, ", m);
	printf("%d\n", s);
}
