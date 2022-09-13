#include "main.h"

/**
 * main - Main entry function
 * Return: 0 if success
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		print_alphabet();
	}
	_putchar('\n');
	return (0);
}
