#include <stdio.h>

/**
 * main- prints alphabets in lower/upper
 * Return: 0 if success
 */

int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar(ch);
	}
	for (ch = "A"; ch <= "Z"; ch++)
	{
		putchar(ch);
	}

	printf("\n");

	return (0);
}
