#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: source string
 * @src: string to be added
 * @n: number of bytes
 *
 * Return: char concatenated.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/*store length of string in i */
	i = 0;
	j = 0;

	while (dest[i] != '\0')
		++i;

	/*concatenate string */
	while (src[j] < src[n])
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	/* initialise final value to null */
	dest[i] = '\0';

	return (dest);
}

