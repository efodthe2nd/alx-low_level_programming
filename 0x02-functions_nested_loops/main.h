

#include <unistd.h>

int _putchar(char c)
{
	return (write(0, &c, 1));
}
  
