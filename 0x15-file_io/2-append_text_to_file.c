#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed, len, wr;

	if (!filename)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		wr = write(filed, text_content, len);

		if (wr == -1)
			return (-1);
	}

	close(filed);

	return (1);
}
