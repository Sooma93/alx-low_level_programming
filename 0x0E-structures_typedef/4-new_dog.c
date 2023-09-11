#include <stdlib.h>
#include "dog.h"
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - return
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * _strcopy - copy
 * @dest: buffer
 * @src: source
 * Return: pointer
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
			dest[index] = '\0';
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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	return (NULL);
	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);
	return (doggo);
}
