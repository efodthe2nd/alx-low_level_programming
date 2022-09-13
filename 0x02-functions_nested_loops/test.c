#include <stdio.h>

/**
 * jack_bauer - annohyance
 * Returns: 0 if success
 */

int main(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 10; hr++)
	{
		for (min = 0; min < 10; min++)
		{
			printf("%d", hr * min);
			
		}
		printf("\n");
	}
	return (0);
}
