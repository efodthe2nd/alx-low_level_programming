#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * set_bit - sets the value of a bit to 1
 * @n: Pointer argument int
 * @index: index of argument
 *
 * Return: 1 if successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}

