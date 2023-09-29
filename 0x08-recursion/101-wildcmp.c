#include "main.h"

int in(char *s1, char *s2);
/**
 * mp - move until reach the after star
 *
 * @s2: string
 *
 * Return: after star
 *
 */

char *mp(char *s2)
{
	if (*s2 == '*')
		return (mp(s2 + 1));
	else
		return (s2);
}

/**
 * wildcmp - compare 2 string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 or 1
 *
 */

int wildcmp(char *s1, char *s2)
{
	int m = 0;

	if (!*s1 && *s2 == '*' && !*mp(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !*s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = mp(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			m += wildcmp(s1 + 1, s2 + 1);
		m += in(s1, s2);
		return (!!m);
	}
	return (0);
}

/**
 * in - inception
 *
 * @s1: first string
 * @s2: secong string
 *
 * Return: in
 *
 */
int in(char *s1, char *s2)
{
	int m = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		m += wildcmp(s1 + 1, s2 + 1);
	m += in(s1 + 1, s2);
	return (m);
}
