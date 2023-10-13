#include "variadic_functions.h"

/**
 * f_char - character
 *
 * @s: sting
 * @p: pointer
 *
 */

void f_char(char *s, va_list p)
{
	printf("%s%c", s, va_arg(p, int));
}

/**
 * f_int - int
 *
 * @s: string
 * @p: pointer
 *
 */
void f_int(char *s, va_list p)
{
	printf("%s%d", s, va_arg(p, int));
}

/**
 * f_float - float
 *
 * @s: string
 * @p: pointer
 *
 */
void f_float(char *s, va_list p)
{
	printf("%s%f", s, va_arg(p, double));
}

/**
 * f_string - string
 *
 * @s: string
 * @p: pointer
 *
 */
void f_string(char *s, va_list p)
{
	char *ptr = va_arg(p, char *);

	switch ((int)(!ptr))
	{
		case 1:
			ptr = "(nil)";
	}
	printf("%s%s", s, ptr);
}

/**
 * print_all - anything
 *
 * @format: string
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *s;
	va_list p;
	t_h m[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};
          lkklk
	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (m[j].t)
		{
			if (format[i] == m[j].t[0])
			{
				m[j].f(s, p);
				s = ",";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
