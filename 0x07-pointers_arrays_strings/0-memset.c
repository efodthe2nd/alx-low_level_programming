#include "main.h"

/**
 * _memset - fills n bytes of memory
 * @s: pointer variable
 * @b: constant byte variable
 * @n: number of bytes of memory
 *
 * Return: char on success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
