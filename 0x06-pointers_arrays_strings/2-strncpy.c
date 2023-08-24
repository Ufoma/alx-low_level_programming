#include "main.h"
/**
 * _strncpy - copy a string
 * @src: source string
 * @dest: destination string
 * @n: Number of bytes of the source string
 *
 * Return: A pointer that copies to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

