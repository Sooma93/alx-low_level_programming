#include "dog.h"
#include <stdio.h>
/**
 * init_dog - init
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
