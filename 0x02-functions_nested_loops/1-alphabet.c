#include "main.h"
#include <unistd.h>
/**
 * main - Entery point
 * Descrption: print aphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
