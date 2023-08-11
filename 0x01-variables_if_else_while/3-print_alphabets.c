#include <stdio.h>
/**
 * main - Entery point
 * Description: upper and lower case alphbet
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int r = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (r <= 90)
	{
		putchar(r);
		r++;
	}
	putchar('\n');
		return (0);
}
