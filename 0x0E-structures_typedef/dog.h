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

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);


#endif

