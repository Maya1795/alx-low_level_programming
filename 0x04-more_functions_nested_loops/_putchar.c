#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes
 *
 * Return: on successs 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
