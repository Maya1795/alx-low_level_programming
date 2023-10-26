#include "main.h"

/**
 * set_bit - set value of bit
 *
 * @n: number
 * @index: index
 *
 * Return: value set
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = (*n != 1l << index);

	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(m));
}
