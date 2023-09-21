#include "main.h"

/**
 * reverse_array - revers array
 *
 * @a: array input
 * @n: no. of elements
 *
 * Return: nothing
 *
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	j = n - 1;
	for (i = 0; i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
