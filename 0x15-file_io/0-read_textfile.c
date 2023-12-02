#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: zero 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed, brd, wr;
	char *buffer;

	if (!filename)
		return (0);

	/*Open file for reading*/
	filed = open(filename, O_RDONLY);

	if (filed == -1)
		return (0);

	/*Allocate memory*/
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	brd = read(filed, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, brd);

	/*Clean up and close the file*/
	close(filed);
	free(buffer);

	return (wr);
}
