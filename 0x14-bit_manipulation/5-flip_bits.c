#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: argument int
 * @m: index
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xod = 0, count = 0;

	xod = n ^ m;

	while (xod)
	{
		if (xod & 1)
			count++;

		xod >>= 1;
	}

	return (count);
}
