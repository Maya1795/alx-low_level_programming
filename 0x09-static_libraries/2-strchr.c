#include "main.h"

/**
 * _strchr - locate character
 *
 * @s: string
 * @c: first occ charater
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
