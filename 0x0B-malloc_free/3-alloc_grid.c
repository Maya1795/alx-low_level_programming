#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return 2 dimm array
 *
 * @width: number
 * @height: number
 *
 * Return: pointer of 2d array
 *
 */

int **alloc_grid(int width, int height)
{
	int **m, i, j;

	m = malloc(sizeof(*m) * height);

	if (width <= 0 || height <= 0 || m == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			m[i] = malloc(sizeof(**m) * width);
			if (m[i] == 0)
			{
				while (i--)
					free(m[i]);
				free(m);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				m[i][j] = 0;
		}
	}
	return (m);
}
