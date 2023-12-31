#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: char
 * @f: pointer
 *
 * Return: 0
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
