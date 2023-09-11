#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - return
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	for (; *str != '\0'; str++)
		len++;

	return (len);
}
/**
 * _strcpy - copy
 * @dest: buffer
 * @src: source
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
			dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	return (NULL);
	doggo->name = malloc(sizeof(char) * name_l);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * own_l);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
	return (NULL);
	}
	doggo->name = _strcpy(doggo->name, name);
	doggo->owner = _strcpy(doggo->owner, owner);
	doggo->age = age;
	}
	return (doggo);
}
