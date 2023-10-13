#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - opscode
 *
 * @argc: number
 * @argv: array
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	char *m = (char *)main;
	int s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	s = atoi(argv[1]);
	if (s < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (s--)
		printf("%02hhx%s", *m++, s ? " " : "\n");
	return (0);
}
