#include "main.h"

/**
 * more_numbers - print from 0 to 14 (10)
 *
 * Return: 0
 *
 */

void more_numbers(void)
{
	int i, j, n;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				n = j % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
