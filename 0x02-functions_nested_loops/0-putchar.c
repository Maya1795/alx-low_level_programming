#include "main.h"

/**
 * main - entry
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	char m[] = "_putchar";
	int i;

	for (i=0; i < 8; i++)
	{
		_putchar(m[i]);
	}
	_putchar('\n');
	return (0);
}
