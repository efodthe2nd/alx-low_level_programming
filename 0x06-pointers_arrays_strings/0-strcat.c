#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/*store length of dest in the i variable */
	i = 0;

	while (dest[i] != '\0')
	{
		++i;
	}

	/* concatenate src to dest */

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	/* terminating the dest string */
	dest[i] = '\0';

	return (dest);
}
