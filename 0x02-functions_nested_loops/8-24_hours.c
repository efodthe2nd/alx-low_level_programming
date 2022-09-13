#include "main.h"

/**
 * jack_bauer - prints minutes of 24h
 *
 * Return: 0 if success
 */

void jack_bauer(void)
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
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}

}
