#include <stdio.h>


/**
 * main - entry
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int d = 0, d2;

	while (d <= 9)
	{
		d2 = 0;
		while (d2 <= 9)
		{
			if (d != d2 && d < d2)
			{
				putchar(d + 48);
				putchar(d2 + 48);

				if (d + d2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
