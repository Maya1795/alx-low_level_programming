#include "main.h"

/**
 * li - last index
 *
 * @s: string
 *
 * Return: last index
 */

int li(char *s)
{
	int m = 0;

	if (*s != '\0')
		m += li(s + 1) + 1;
	return (m);
}

/**
 * ch - check
 *
 * @s: string
 * @st: start
 * @end: end
 * @mo: modiles
 *
 * Return: check
 *
 */
int ch(char *s, int st, int end, int mo)
{
	if ((st == end && mo != 0) || (st == end + 1 && mo == 0))
		return (1);
	else if (s[st] != s[end])
		return (0);
	else
		return (ch(s, st + 1, end - 1, mo));
}

/**
 * is_palindrome - check pali
 *
 * @s: string
 *
 * Return: 0 or 1
 *
 */

int is_palindrome(char *s)
{
	int end = li(s);

	return (ch(s, 0, end - 1, end % 2));
}
