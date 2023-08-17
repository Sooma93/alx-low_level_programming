#include "main.h"
/**
 * print_diagonal - print diagonal '\'
 * @n: number of time '\' printed
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
