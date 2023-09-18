#include "main.h"

/**
 * swap_int - swap the number
 *
 * @a: first input
 * @b: second input
 *
 * Return: noting
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
