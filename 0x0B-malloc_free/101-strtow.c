#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _w - count
 *
 * @s: string
 *
 * Return: number
 *
 */

int _w(char *s)
{
	int i, c = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				c++;
		}
		else if (i == 0)
			c++;
	}
	c++;
	return (c);
}
/**
 * strtow - spilt string words
 *
 * @str: string
 *
 * Return: pointer
 *
 */

char **strtow(char *str)
{
	int i, j, a, b, n = 0, w = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (0);
	n = _w(str);
	if (n == 1)
		return (0);
	p = (char **)malloc(n * sizeof(char *));
	if (p == NULL)
		return (0);
	p[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			p[w] = (char *)malloc(i * sizeof(char));
			j--;
			if (p[w] == NULL)
			{
				for (a = 0; a < w; a++)
					free(p[a]);
				free(p[n - 1]);
				free(p);
				return (0);
			}
			for (b = 0; b < j; b++)
				p[w][b] = str[i + b];
			p[w][b] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (p);
}
