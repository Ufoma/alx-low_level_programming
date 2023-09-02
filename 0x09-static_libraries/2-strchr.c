#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate the character in a string
 * @s: the string to search
 * @c: character to find
 * Return: pointer or zero
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

