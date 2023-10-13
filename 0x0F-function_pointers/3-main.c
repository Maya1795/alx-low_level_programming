#include "3-calc.h"

/**
 * main - check op
 *
 * @argc: number
 * @argv: array
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int (*op)(int, int), m, s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	m = atoi(argv[1]);
	s = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	if (!s && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(m, s));
	return (0);

}
