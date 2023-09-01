#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string
 *
 * Return: The string length.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

