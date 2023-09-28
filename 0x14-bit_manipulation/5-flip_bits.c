#include "main.h"

/**
 * flip_bits - return number of bits
 * @n: first number
 * @m: seconed number
 * Return: bits numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
