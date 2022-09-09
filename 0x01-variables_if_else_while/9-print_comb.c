#include <stdio.h>

/**
 * main- prints single digits
 * Return: 0 if success
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(' ');
		putchar(ch);
		if ((ch != '9'))
			putchar(',');
	}

	return (0);
}
