#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 *  main - prints a random number
 *  Return: 0 if success
 */
int main(void)
{
	int n = 0;

	/*srand(time(0));
	n = rand() - RAND_MAX / 2;
	*/
	if ((n < 0))
	{
		printf("%d is negative\n", n);
	} else if ((n > 0))
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
