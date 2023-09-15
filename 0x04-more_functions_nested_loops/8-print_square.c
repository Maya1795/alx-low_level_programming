#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of square
 *
 * Return: always 0 (success)
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
