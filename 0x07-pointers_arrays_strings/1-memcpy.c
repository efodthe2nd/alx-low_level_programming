#include "main.h"

/**
 * _memcpy - copies n bytes to memory area
 * @dest: destination memory area
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: dest if sucess
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
