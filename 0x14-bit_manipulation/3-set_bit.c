#include "main.h"

/**
 * set_bit - set the value od bit
 * @n: pointer to the number
 * @index: index number
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
