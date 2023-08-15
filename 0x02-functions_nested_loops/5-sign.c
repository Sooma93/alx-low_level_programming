#include "main.h"
/**
 * print_sign - print the sign of alphabet
 * @n: the number to check
 * Return: 1 prints , if n bigger than zero
 * 0 if n equal zero
 * -1 if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
