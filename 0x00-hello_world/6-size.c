#include <stdio.h>

/**
 * main -prints sizes of variables
 * Return - 0 if successful.
 */
int main(void)
{
	char i;
	int c;
	long d;
	int e;
	float f;
	char b[] = "byte(s)";

	printf("Size of a char: %lu %s\n", sizeof(i), b);
	printf("Size of an int: %lu %s\n", sizeof(c), b);
	printf("Size of a long int: %lu %s\n", (long)sizeof(d), b);
	printf("Size of a long long int: %lu %s\n", (unsigned long)sizeof(e), b);
	printf("Size of a float: %lu %s\n", sizeof(f), b);
	return (0);
}
