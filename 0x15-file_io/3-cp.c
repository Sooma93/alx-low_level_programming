#include "main.h"
#include <stdio.h>
/**
 * main - copy file
 * @argc: argument
 * @argv: argument
 * Return: void
 */
int main(int argc, char *argv[])
{
	int fr, fw, i, j, k;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usege: cp file_from file_to\n");
		exit(97);
	}
	fr = open(argv[1], O_RDONLY);
	if (fr < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fw = open(argv[2], O_CREAT | O_RDONLY | O_TRUNC, 0664);
	while ((i = read(fr, buf, BUFSIZ)) > 0)
	{
		if (fw < 0 || write(fw, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(fr);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(fr);
	k = close(fw);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw);
		exit(100);
	}
	return (0);
}


