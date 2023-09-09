#include <stdio.h>


/**
 * main - entry
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}


