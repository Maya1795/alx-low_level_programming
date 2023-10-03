#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 *
 * @argc: count
 * @argv: array
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int sum = 0;
	char *m;

	while (--argc)
	{
		for (m = argv[argc]; *m; m++)
			if (*m < '0' || *m > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
