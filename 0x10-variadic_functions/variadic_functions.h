#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct t - token
 *
 * @t: pointer
 * @f: function
 */
typedef struct tok
{
	char t;
	void (*f)(va_list);
} tok_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
