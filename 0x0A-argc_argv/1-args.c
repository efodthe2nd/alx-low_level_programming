#include "main.h"
#include <stdio.h>

/**
 * main - prints argc count
 *@argc: argument count
 @argv: argument vector
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
