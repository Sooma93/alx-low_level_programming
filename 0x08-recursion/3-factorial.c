#include "main.h"
/**
 * factorial - return all the factriol
 * @n: paramter
 * Return: factriol
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
