#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - return the sqr
 * @n: value
 * Return: the national sqr
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - natural sqr root
 * @n: value
 * @i: value
 * Return: natural sqr root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
	return (i);

	return (_sqrt(n, i + 1));
}
