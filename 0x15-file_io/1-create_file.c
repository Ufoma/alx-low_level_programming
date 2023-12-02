#include "main.h"
/**
 * create_file - Creates a file that doesn't exists
 * @filename: The name of the file to create.
 * @text_content: The string to write to the file.
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content);
{
	int filed, wr, len;

	if (!filename)
		return (-1);

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filed == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	wr = write(filed, text_content, len);

	if (wr == -1)
		return (-1);

	close(filed);
	return (1);
}
