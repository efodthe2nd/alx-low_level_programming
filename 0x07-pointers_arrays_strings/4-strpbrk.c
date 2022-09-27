#include "main.h"

/**
 * _strpbrk - locates occurence of s in string
 * @s: string s to be scanned
 * @accept: checking string
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
