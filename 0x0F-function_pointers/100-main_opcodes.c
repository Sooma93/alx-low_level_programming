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
	int bytes, i;
	char *arry;

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
	arry = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
		printf("%02hhx\n", arry[i]);
		break;
	}
	printf("%02hhx", arry[i]);
	}
	return (0);
}
