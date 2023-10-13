#include "variadic_functions.h"

/**
 * sum_them_all - sum of alll no.
 *
 * @n: count
 *
 * Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int m = 0, c = n;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	while (i--)
		m += va_arg(p, int);
	va_end(p);
	return (m);
}
