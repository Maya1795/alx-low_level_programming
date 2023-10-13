#include "variadic_functions.h"

/**
 * print_numbers - print no.
 *
 * @separator: string
 * @n: count
 *
 * Return: numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int c = n;
	va_list p;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (c--)
		printf("%d%s", va_arg(p, int),
				c ? (separator ? separator : "") : "\n");
	va_end(p);
}
