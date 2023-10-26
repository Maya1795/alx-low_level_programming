#include "main.h"

/**
 * get_bit - get bit
 *
 * @n: number
 * @index: position
 *
 * Return: value of bits
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
