#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int n = 0;
	char ch = 'a';

	while (n <= 17)
	{
		putchar(n + '0');
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}

