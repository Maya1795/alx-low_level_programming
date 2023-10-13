#include "variadic_functions.h"

/**
 * print_strings - print string
 *
 * @separator: string
 * @n: count
 *
 * Return: string
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int c = n;
	va_list p;
	char *m;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (c--)
		printf("%s%s", (m = va_arg(p, char *)) ? m : "(nil)"
				c ? (separator ? separator : "") : "\n");
	va_end(p);
}
