#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _s(char *n);
/**
 * str_concat- concatenate 2 string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer
 *
 */

char *str_concat(char *s1, char *s2)
{
	int si1, si2, i;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	si1 = _s(s1);
	si2 = _s(s2);
	p = malloc((si1 + si2) * sizeof(char) + 1);
	if (p == 0)
		return (0);
	for (i = 0; i <= si1 + si2; i++)
	{
		if (i < si1)
			p[i] = s1[i];
		else
			p[i] = s2[i - si1];
	}
	p[i] = '\0';
	return (p);
}

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
