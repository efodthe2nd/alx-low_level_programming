#include <stdio.h>

/**
 * main- prints two digits numbers
 * Return: 0 if success
 */

int main(void)
{
	int sd;
	int ed;

	int xd;
	int yd;

	for (sd = '0'; sd <= '9'; sd++)
	{
		for (ed = '0'; ed <= '0'; ed++)
		{
			for (xd = '0'; xd <= '9'; xd++)
			{
				for (yd = '1'; yd <= '9'; yd++)
				{
					if ((xd != yd) && !(xd > yd))
					{
						putchar(' ');
						putchar(sd);
						putchar(ed);
						putchar(' ');
						putchar(xd);
						putchar(yd);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
