#include <stdio.h>
/**
 * main - print number of argc
 * @argc: argumeint
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);
	return (0);
}
