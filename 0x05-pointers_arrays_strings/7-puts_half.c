#include "main.h"
/**
 * puts_half - print half of string
 * @str: the half of string
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;
	int count;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	n = (count - 1) / 2;
		for (i = n + 1; i != '\0'; i++)
			_putchar(str[i]);
	_putchar('\n');
}
