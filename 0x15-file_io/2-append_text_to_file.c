#include "main.h"
/**
 * append_text_to_file - append text to end of file
 * @filename: name of file
 * @text_content: the text at end of file
 * Return: null or 0
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, i);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}

