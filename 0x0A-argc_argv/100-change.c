#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coin
 *
 * @argc: count
 * @argv: array
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i, ls = 0, m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				ls += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
					break;
			}
		}
		printf("%d\n", ls);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
