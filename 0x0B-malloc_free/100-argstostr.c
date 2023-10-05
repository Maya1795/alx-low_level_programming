#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _s - size of string
 *
 * @n: string
 *
 * Return: size
 *
 */

int _s(char *n)
{
	int s;

	for (s = 0; n[s] != '\0'; s++)
		;
	return (s);
}

/**
 * argstostr - concate all argument
 *
 * @ac: number
 * @av: arg
 *
 * Return: string
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, n = 0, c = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++, n++)
		n += _s(av[i]);
	p = malloc(sizeof(char) * n + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
			p[c] = av[i][j];
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
