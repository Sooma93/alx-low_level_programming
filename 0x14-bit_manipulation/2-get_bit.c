#include "main.h"
/**
 * get_bit - return the value of bit
 * @n: number of bit
 * @index: the index value
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}

