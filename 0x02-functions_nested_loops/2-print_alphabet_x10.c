#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - Entery point
 * Descrption: print 10x lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char num, ch;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
