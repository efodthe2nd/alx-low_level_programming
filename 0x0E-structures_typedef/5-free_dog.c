#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - function to free dogs
 * @d: dog to be free
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}

}
