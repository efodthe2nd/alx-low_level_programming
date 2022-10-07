#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: size of string bytes
 *
 * Return: concatenated char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;

	char *p;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			p[j] = s1[j];
		if (j >= i)
		{
			p[j] = s2[k];
			k++;
		}
		j++;
	}
	p[j] = '\0';
	return (p);
}
