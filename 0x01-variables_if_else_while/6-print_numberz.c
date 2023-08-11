#include <stdio.h>
/**
 * main - Entery point
 * Descrption: print numberz
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + 48);
	}
	putchar('\n');
	return (0);
}
