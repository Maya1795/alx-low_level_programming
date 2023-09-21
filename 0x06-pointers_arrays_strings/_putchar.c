#include <unistd.h>

/**
 * _putchar - writes character c
 *
 * @c: the character to print
 *
 * Return: on 1 success
 * on error , -1 is returned
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
