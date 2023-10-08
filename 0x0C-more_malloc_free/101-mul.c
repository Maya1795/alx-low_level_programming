#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _id - check chara id digit
 *
 * @m: chara
 * Return: 1 on success
 */

int _id(int m)
{
	return (m >= '0' && m <= '9');
}

/**
 * _st - return length
 *
 * @s: string
 *
 * Return: length
 *
 */

int _st(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * _bm - mult 2 number
 *
 * @m1: first number
 * @m2: second number
 *
 * Return: mult
 *
 */

char *_bm(char *m1, char *m2)
{
	char *f;
	int l1, l2, a, b, c, x;

	l1 = _st(m1);
	l2 = _st(m2);
	f = malloc(a = x = l1 + l2);
	if (f == 0)
	{
		printf("Error\n");
		exit(98);
	}
	while (a--)
		f[a] = 0;
	for (l1-- ; l1 >= 0; l1--)
	{
		if (!_id(m1[l1]))
		{
			free(f);
			printf("Error\n");
			exit(98);
		}
		a = m1[l1] - '0';
		c = 0;
		for (l2 = _st(m2) - 1; l2 >= 0; l2--)
		{
			if (!_id(m2[l2]))
			{
				free(f);
				printf("Error\n");
				exit(98);
			}
			b = m2[l2] - '0';
			c += f[l1 + l2 + 1] + (i * y);
			f[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c)
			f[l1 + l2 + 1] += c;
	}
	return (f);
}

/**
 * main - mult 2 number
 *
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *f;
	int a, c, x;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	x = _st(argv[1]) + _st(argv[2]);
	f = _bm(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (f[c])
			a = 1;
		if (a)
			_putchar(f[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(f);
	return (0);
}
