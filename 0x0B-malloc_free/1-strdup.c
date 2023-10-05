#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to ner all. space
 *
 * @str: string
 *
 * Return: pointer
 *
 */


char *_strdup(char *str)
{
	char *p;
	int i, s = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[s] != '\0'; s++)
		;
	p = malloc(s * sizeof(char) + 1);
	if (p == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < s; i++)
			p[i] = str[i];
	}
	*p = 0;
	return (p);
}
