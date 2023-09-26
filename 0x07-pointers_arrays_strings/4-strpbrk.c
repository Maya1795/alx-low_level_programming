#include "main.h"

/**
 * _strpbrk - search in string
 *
 * @s: string
 * @accept: search charater
 *
 * Return: s
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *m;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				m = &s[i];
				return (m);
			}
			j++;
		}
		i++;
	}
	return (0);

}
