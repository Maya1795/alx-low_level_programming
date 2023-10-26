#include "main.h"

/**
 * print_binary - print binary number
 *
 * @n: number
 *
 * Return: binary number
 *
 */

void print_binary(unsigned long int n)
{
	int m = sizeof(n) * 8, p = 0;

	while (m)
	{
		if (n & 1l << --m)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (p == 0)
		_putchar('0');
}
