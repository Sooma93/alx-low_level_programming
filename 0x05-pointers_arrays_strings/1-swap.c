#include "main.h"
/**
 * swap_int - swap the int value
 * @a: paramter 1
 * @b: paramter 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
