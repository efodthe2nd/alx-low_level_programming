#include <stdio.h>

/**
 * main- prints double digits
 * Return: 0 if success
 */

int main(void)
{
	int fd;
	int sd;

	for (fd = '0'; fd <= '9'; fd++)
	{
		for (sd = '1'; sd <= '9'; sd++)
		{
			if ((fd != sd) && !(fd > sd))
			{
					putchar(' ');
					putchar(fd);
					putchar(sd);
					putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}
