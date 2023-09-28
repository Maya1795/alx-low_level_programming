#include "main.h"

/**
 * _strlen_recursion - print length
 *
 * @s: string
 *
 * Return: length
 *
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
		c += _strlen_recursion(s + 1) + 1;
	return (c);
}
