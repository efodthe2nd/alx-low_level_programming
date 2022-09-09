#include <stdio.h>

/**
 * main- prints alphabets in lowercase
 * Return: 0 if success
 */

int main(void)
{
	char ch;	
	
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");

	return (0);
}
