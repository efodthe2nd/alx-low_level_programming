#include <stdio.h>

/**
 * main -prints sizes of variables
 * Return: 0 if successful.
 */
int main(void)
{
	char i;
	int c;
	long int d;
	long long int e;
	float f;
	char b[] = "byte(s)";

	printf("Size of a char: %d %s\n", sizeof(i), b);
	printf("Size of an int: %d %s\n", sizeof(c), b);
	printf("Size of a long int: %d %s\n", (long)sizeof(d), b);
	printf("Size of a long long int: %d %s\n", (unsigned long)sizeof(e), b);
	printf("Size of a float: %d %s\n", sizeof(f), b);
	return (0);
}
