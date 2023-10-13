#include "variadic_functions.h"

/**
 * print_all - print anything
 *
 * @format: count
 *
 * Return: 0
 *
 */

void print_all(const char * const format, ...)
{
	int c = 0;
	char *ptr, *s = "";
	va_list p;

	va_start(p, format);
	if (format)
	{
		while (format[c])
		{
			switch (format[c])
			{
				case 'c':
					printf("%s%c ", s, va_arg(p, int));
					break;
				case 'i':
					printf("%s%d ", s, va_arg(p, int));
					break;
				case 'f':
					printf("%s%f ", s, va_arg(p, double));
					break;
				case 's':
					ptr = va_arg(p, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s ", s, ptr);
					break;
				default:
					c++;
					continue;
			}
			s = ",";
			c++;
		}
	}
	printf("\n");
	va_end(p);
}
