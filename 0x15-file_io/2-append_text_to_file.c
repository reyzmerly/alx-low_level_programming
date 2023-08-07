#include "main.h"

/**
 * append_text_to_file - this will appends text at the end of a file.
 * @filename:for the  pointer to the name of the file.
 * @text_content: as  string to add to the end of the file.
 *
 * Return: for the  If the function fails or filename is nULL - -1.
 *         or not the file does not exist the user lacks write permissions - 1
 *         result - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
