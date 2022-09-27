#include "main.h"

/**
 * _strchr - finds letter in string
 * @s: string to be checked
 * @c: letter to be checked
 *
 * Return: result char
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
