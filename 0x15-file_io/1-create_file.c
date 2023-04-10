#include "main.h"
/**
 * create_file - 1-create_file.c.
 * @filename: A pointer to the name of the 1-create_file.c.
 * @text_content: A pointer to a string to write to 1-create_file.c.
 *
 * Return: -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
