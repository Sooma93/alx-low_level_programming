#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destaintion
 * @src: source string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int srclen;
	int destlen;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
