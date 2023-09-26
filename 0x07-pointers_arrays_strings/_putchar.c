#include "main.h"
#include <unistd.h>

/**
 * _putchar - write chara
 *
 * @c: character
 *
 * Return: 1 (success)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
