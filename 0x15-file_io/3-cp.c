#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fi);
/**
 * create_buffer - buffer
 * @file: name of file
 * Return: pointer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Erorr: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close file
 * @fi: the file
 */
void close_file(int fi)
{
	int i;

	i = close(fi);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Erorr: can't close fi %d\n", fi);
		exit(100);
	}
}
/**
 * main - copy file
 * @argc: argument
 * @argv: argument
 * Return: void
 */
int main(int argc, char *argv[])
{
	int from, to, wr, re;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usege: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read from file %s\n", argv[2]);
			free(buffer);
			exit(98);
		}
		wr = write(to, buffer, re);
		if (to == -1 || wr == -1)
		{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
		}
		re = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}


