#include <stdio.h>

/**
 * main - print every thing
 *
 * @argc: count
 * @argv: array
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; argc >= 0; i++)
	{
		printf("%s\n", argv[i]);
		argc --;
	}
	return (0);
}
