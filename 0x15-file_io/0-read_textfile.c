#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read the text and print it
 * @filename: read file
 * @letters: number of letters
 * Return:if the file not read or open 0 and NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t fi;
	ssize_t rd;
	ssize_t wt;

	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
			rd = read(fi, ch, letters);
			wt = write(STDOUT_FILENO, ch, rd);
			free(ch);
			close(fi);
			return (wt);
			}
