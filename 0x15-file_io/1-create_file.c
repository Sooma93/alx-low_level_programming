#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of file
 * @text_content: the content of text
 * Return: if its not work -1
 */

int create_file(const char *filename, char *text_content)
{
	int fi, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fi = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		wr = write(fi, text_content, i);
	if (fi == -1 || wr == -1)
		return (-1);
	close(fi);
	return (1);
}
