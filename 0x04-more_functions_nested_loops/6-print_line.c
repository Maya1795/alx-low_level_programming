#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: is number of _ chara
 *
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}

}
