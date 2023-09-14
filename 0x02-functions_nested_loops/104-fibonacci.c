#include "main.h"

/**
 * numlength - return length
 *
 * @num: operation number
 *
 * Return: number of digit
 *
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - entry
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int c, i;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (c = 1; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i = numlength(mx) - 1 - numlength(f1);

		while (f1o > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);


}
