#include "main.h"
/**
 * print_array - prini elemnt of array
 * @a: the arry
 * @n: element
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
		printf(" ");
	}
	printf("\n");
}
