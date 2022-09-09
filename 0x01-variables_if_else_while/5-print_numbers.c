#include <stdio.h>

/**
 * main - prints single digit numbers
 * Return : 0 if success
 */

int main(void)
{
	int num = 0;

	while(num < 10)
	{
		printf("%d",num);
		num++;
	}
	printf("\n");

	return (0);
}
