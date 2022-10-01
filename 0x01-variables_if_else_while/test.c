#include <stdio.h>

/**
 * main - prints a string
 * Return: 0 if success
 */

#define MAX 10
int main(void)
{
	int data[MAX];
	int i;

	/* read in the data */
	for( i=0; i<MAX; i++) 
	{
		printf("Enter item #%d: " ,i);
		scanf("%d", &data[i]);
	}

	printf("You entered the following items:\n");
	for(i=0; i < MAX; i++)
	{
		printf("item #%d: %d\n",i, data[i]);
	}

	return (0);
}
