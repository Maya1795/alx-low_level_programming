#include "main.h"

/**
 * clear_bit - clear of bit
 *
 * @n: number
 * @index: position
 *
 * Return: set value of bit to 0
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
