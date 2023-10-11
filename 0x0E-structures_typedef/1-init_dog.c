#include "dog.h"

/**
 * init_dog - dog init
 *
 * @d: pointer
 * @name: name of dog
 * @age: number
 * @owner: dog owner
 *
 * Return: 0
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
