#include <stdio.h>

/**
 * main - prints shit
 * Return: 0 if success
 */

int main(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i*j;
			if (mul <= 9)
			{
				printf(" ");
			}
			printf(" ");
			printf("%d", mul);
			printf(",");
		}
		printf("\n");
	}
	return (0);
}
