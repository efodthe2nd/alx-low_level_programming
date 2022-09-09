#include <stdio.h>

/**
 * main- prints alphabet
 * Return: 0 if success
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ++ch)
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
	}
	printf("\n");

	return (0);
}
