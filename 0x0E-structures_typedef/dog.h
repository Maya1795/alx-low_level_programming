#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 *
 * @name: char
 * @age: number
 * @owner: name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */