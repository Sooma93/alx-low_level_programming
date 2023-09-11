#ifndef DOG_H
#define DOG_H
/**
 * struct dog - init dog str
 * @name: name of dog
 * @age: age of the dog
 * @owner: the owner
 */
struct dog
{
	char *name;
		float age;
		char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
