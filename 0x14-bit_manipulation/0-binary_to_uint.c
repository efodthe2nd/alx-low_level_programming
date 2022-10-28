#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary number to int
 * @b: converts string b to binary
 *
 * Return: the converted string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);



	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			val <<= 1;
			val += b[i] - '0';
		}
		else
		{
			return (0);
		}

		i++;
	}

	return (val);
}
