#include "main.h"
#include <stdio.h>

/**
 * isa - determine if n is assic
 *
 * @n: integer
 *
 * Return: 1
 *
 */
int isa(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * ph - print hex value in string
 *
 * @b: string to be print
 * @start: starting postion
 * @end: end postion
 *
 */

void ph(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * pa - print assci
 * @b: string to be print
 * @start: starting postion
 * @end: ending postion
 *
 */

void pa(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isa(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print buffer
 *
 * @b: string
 * @size: size of buffer
 *
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			ph(b, start, end);
			pa(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
