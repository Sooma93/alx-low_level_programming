#include <stdio.h>
#include <stdlib.h>
/**
 * main - print
 * @argc: arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*addre)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("ERROR\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("ERROR\n");
		exit(2);
	}
	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)addre;
		printf("%.2x\n", opcode);
		if (index == bytes - 1)
			continue;
		printf(" ");
		addre++;
	}
	printf("\n");
	return (0);
}
