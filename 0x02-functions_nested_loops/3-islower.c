#include "main.h"
#include <unistd.h>
/**
 * _islower - checks for lowercase alphabet
 * @c: character to be checked
 * Return: if charcter is lower case
 */
int _islower(int c)
{

	if (c <= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
