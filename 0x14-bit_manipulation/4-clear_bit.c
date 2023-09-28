#include "main.h"
/**
 * clear_bit - set value of 0
 * @n: pointer
 * @index: index value
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;
	return (1);
}
