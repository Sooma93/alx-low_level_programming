#include "main.h"
/**
 * rev_string - reversing a string
 * @s: reversed string
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char j;

	j = s[i];
	s[i] = s[count - 1 - i];
	s[count - 1 - i] = j;
	}
}
