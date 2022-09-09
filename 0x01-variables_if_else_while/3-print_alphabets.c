#include <stdio.h>

/**
 * main- prints alphabets in lower/upper
 * Return: 0 if success
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ++ch)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ++ch)
	{
		putchar(ch);
	}

	printf("\n");

	return (0);
}
