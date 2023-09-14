#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - print the result
 * @argc: array
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
