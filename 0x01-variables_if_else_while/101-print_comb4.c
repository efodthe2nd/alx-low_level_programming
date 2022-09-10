#include <stdio.h>

/**
 * main- prints three digits comb
 * Return: 0 if success
 */

int main(void)
{
	int fd;
	int sd;
	int td;

	for (fd = '0'; fd <= '9'; fd++)
	{
		for (sd = '1'; sd <= '9'; sd++)
		{
			for (td = '2'; td <= '9'; td++)
			{
				if (!(fd == sd) && !(sd == td) && !(fd > sd) && !(sd > td))
				{
					putchar(' ');
					putchar(fd);
					putchar(sd);
					putchar(td);
					putchar(',');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

