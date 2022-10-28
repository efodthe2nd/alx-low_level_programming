#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * get_bit - returns the value of a bit
 * @n: argument to return
 * @index: is the index
 *
 * Return: value of index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0;

	while (n)
	{
		if (c == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		c++;
	}

	if (index > c && index < 63)
		return (0);

	return (-1);
}
