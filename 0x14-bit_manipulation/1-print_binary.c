#include "main.h"
/**
 * print_binary - function which prints the binary of a number
 *
 * @n: no.
 * Return: zero
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
