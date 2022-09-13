#include "main.h"

/**
 * jack_bauer - prints minutes of 24h
 *
 * Return: 0 if success
 */

void jack_bauer(void)
{
	int i,j,k,l;

	for (i = 48; i < 51; i++)
	{	
		for (j = 48; j < 52; j++)
		{	
			
			for (k = 48; k < 54; k++)
			{	
				for (l = 48; l <= 57; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}

}
