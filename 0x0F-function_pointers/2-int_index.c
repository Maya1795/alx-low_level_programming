#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for int
 *
 * @array: array
 * @size: number
 * @cmp: function
 *
 * Return: index of fiest element
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (size > i)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	else
		return (-1);
}
