#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the last digit of the number
 * Return: the last value of the number
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;

	if (r < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
