#include <stdio.h>

void A()
{
	printf("Hello!\n");
}

void b(void (*ptr)())
{
	ptr();
}

int main(void)
{
	void (*p)() = A;
	b(p);
}
