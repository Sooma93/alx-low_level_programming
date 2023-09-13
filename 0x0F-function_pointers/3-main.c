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
	int (*oprt)(int, int);

		if (argc != 4)
		{
			printf("ERROR\n");
				exit(98);
		}
		oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("ERROR\n");
		exit(99);
	}
	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
