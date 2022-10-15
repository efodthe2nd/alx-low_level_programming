#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to init a dog
 * @d: struct instance of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: current owner of dog
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}


}
