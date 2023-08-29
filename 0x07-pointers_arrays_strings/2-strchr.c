#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: Input string
 * @c: Character to locate
 * Return: Pointer to the first occurrence of the character in the string.
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

