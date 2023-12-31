#include "main.h"

int sq(int n, int m);
/**
 * _sqrt_recursion - square root
 *
 * @n: number
 *
 * Return: square root of number
 *
 */

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - square
 *
 * @n: number
 * @m: value
 *
 * Return: number
 *
 */
int sq(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (sq(n, m + 1));
	else
		return (-1);
}
