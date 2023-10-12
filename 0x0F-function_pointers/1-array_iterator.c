#include "function_pointers.h"

/**
 * array_iterator - excutes function
 *
 * @array: array
 * @size: number
 * @action: function
 *
 * Return: 0
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *m = array + size - 1;

	if (array && size)
		while (array <= m)
			action(*array++);
}
