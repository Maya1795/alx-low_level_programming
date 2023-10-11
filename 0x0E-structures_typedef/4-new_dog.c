#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _c - copy
 *
 * @d: copy
 * @s: string
 *
 * Return: copy
 *
 */

char *_c(char *d, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}

/**
 * _l - length
 *
 * @s: string
 *
 * Return: length
 *
 */

int _l(char *s)
{
	int c = 0;

	while (*s++)
		c++;
	return (c);
}

/**
 * new_dog - creat new dog
 *
 * @name: char
 * @age: number
 * @owner: char
 *
 * Return: pointer
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (0);
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == 0)
		return (0);
	(*d).name = malloc(sizeof(char) * (_l(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (0);
	}
	(*d).owner = malloc(sizeof(char) * (_l(owner) + 1));
	if ((*d).owner == NULL)
	{
		free((*d).name);
		free(d);
		return (0);
	}
	(*d).name = _c((*d).name, name);
	(*d).age = age;
	(*d).owner = _c((*d).owner, owner);
	return (d);
}
