#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0 (successs)
 *
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

