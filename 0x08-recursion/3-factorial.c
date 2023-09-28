#include "main.h"

/**
 * factorial - print factorial
 *
 * @n: factorial number
 *
 * Return:factorial
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n *= factorial(n - 1);
	return (n);
}
