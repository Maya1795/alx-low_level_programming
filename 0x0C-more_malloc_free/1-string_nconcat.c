#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 string
 *
 * @s1: first string
 * @s2: second string
 * @n: number
 *
 * Return: pointer
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, s1l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	p = malloc(s1l + n + 1);
	if (p == NULL)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);

}
