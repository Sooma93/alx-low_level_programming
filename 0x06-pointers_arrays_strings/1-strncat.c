#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: distantion
 * @src: source
 * @n: int value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
