#include "main.h"
#include <stdio.h>

/**
 * cp - check prime
 *
 * @n: number
 * @m:check
 *
 * Return:check
 *
 */
int cp(int n, int m)
{
	if (m >= n && n >= 2)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (cp(n, m + 1));
}

/**
 * is_prime_number - check if no. is prime
 *
 * @n: number
 *
 * Return: check
 *
 */

int is_prime_number(int n)
{
	return (cp(n, 2));
}
