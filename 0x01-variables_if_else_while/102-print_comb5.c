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

	while (d <= 99)
	{
		d2 = d;
		while (d2 <= 99)
		{
			if (d2 != d)
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				putchar(' ');
				putchar((d2 / 10) + 48);
				putchar((d2 % 10) + 48);

				if (d != 98 || d2 != 99)
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
