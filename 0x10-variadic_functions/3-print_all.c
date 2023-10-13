#include "variadic_functions.h"

/**
 * f_char - character
 *
 * @p: pointer
 *
 */

void f_char(va_list p)
{
	printf("%c", va_arg(p, int));
}

/**
 * f_int - int
 *
 * @p: pointer
 *
 */
void f_int(va_list p)
{
	printf("%d", va_arg(p, int));
}

/**
 * f_float - float
 *
 * @p: pointer
 *
 */
void f_float(va_list p)
{
	printf("%f", va_arg(p, double));
}

/**
 * f_string - string
 *
 * @p: pointer
 *
 */
void f_string(va_list p)
{
	char *ptr = va_arg(p, char *);

	if (!ptr)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
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
	char *s1 = "", *s2 = ", ";
	va_list p;
	t_h m[] = {
		{'c', f_char},
		{'i', f_int},
		{'i', f_float},
		{'s', f_string},
		{'\0', NULL}
	};

	va_start(p, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (m[j].t != '\0')
		{
			if (format[i] == m[j].t)
			{
				printf("%s", s1);
				m[j].f(p);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
