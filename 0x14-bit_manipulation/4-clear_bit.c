#include "main.h"

/**
 * clear_bit - this function sets the value of a given bit
 * @n: number pointer
 * @index: number index
 *
 * Return: 1 for true, -1 for false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

