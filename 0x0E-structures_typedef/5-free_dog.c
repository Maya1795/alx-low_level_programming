#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free of dog
 *
 * @d: pointer
 *
 * Return: 0
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
			free((*d).name);
		if ((*d).owner)
			free((*d).owner);
		free(d);
	}
}
