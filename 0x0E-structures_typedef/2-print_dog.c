#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a dog
 * @d: struct dog
 *
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n Age: %.1f\n Owner: %s\n",
			d->name, d->age, d->owner);
}
