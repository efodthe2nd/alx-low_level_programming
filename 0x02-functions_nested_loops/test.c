#include <stdio.h>

/**
 * main - main function
 * return: 0 if success
 */

int main(void)
{
	int i,j,k,l;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{	
			
			for (k = 0; k < 6; k++)
			{	
				for (l = 0; l < 10; l++)
				{
					printf("%d",i);
					printf("%d",j);
					printf(":");
					printf("%d",k);
					printf("%d",l);
					printf("\n");
				}
			}
		}
	}

		return (0);

}
