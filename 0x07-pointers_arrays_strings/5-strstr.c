#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: second string
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b;

	while (haystack[a])
	{
		b = 0;
		
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}

	return ('\0');
}
