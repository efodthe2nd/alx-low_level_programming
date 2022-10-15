#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - a dog wey dey craze
 * @name: name of dog
 * @age: how old the dog is
 * @owner: present owner
 *
 * Description: This is a struct for a doggie
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

