#include "main.h"
#include <stdio.h>

/**
 * isLower - determine accis is lower
 * @c: para
 * Return: 1
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - dete delimiter
 *
 * @c: chara
 *
 * Return: 1
 *
 */

int isdelimiter(char c)
{
	int i;
	char d[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == d[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizer all word od string
 *
 * @s: input string
 *
 * Return: string with capitlization words
 *
 */

char *cap_string(char *s)
{
	char *p = s;
	int f = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			f = 1;
		else if (isLower(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++;
	}
	return (p);
}
