#include <stdio.h>

/**
 * main- prints alphabets reversed
 * Return: 0 if success
 */

int main()
{
	int ch = 122;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
