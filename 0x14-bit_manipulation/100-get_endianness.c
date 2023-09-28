#include "main.h"

/**
 * get_endianness - check endiannes
 * Return: 0 if big else 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
