#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: paramter
 * @s2: paramter
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int s11 = 0;
	int s22 = 0;
	int i;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s11++;
	for (i = 0; s2[i] != '\0'; i++)
		s22++;
	output = malloc(sizeof(char) * (s11 + s22) + 1);

	if (output == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		output[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		output[s11 + i] = s2[i];
	return (output);
}

