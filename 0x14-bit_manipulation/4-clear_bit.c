#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clears the bit at the index
 * @n: argument index
 * @index: value index
 *
 * Return: 1 if it works
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
