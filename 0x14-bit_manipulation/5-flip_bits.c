#include "main.h"

/**
 * flip_bits - flip 2 number
 *
 * @n: number
 * @m: number to flip
 *
 * Return: n0. of bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s = n ^ m, c = 0;

	while (s)
	{
		if (s & 1ul)
			c++;
		s = s >> 1;
	}
	return (c);
}
