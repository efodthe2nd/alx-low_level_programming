#include "dog.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * isright - function to create dog
 *
 *@d: pointer to dog instance
 */

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0;
	int own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
			return (NULL);

		cutie_dog->name = malloc(sizeof(char) * name_l);

		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->owner = malloc(sizeof(char) * own_l);

		if (cutie_dog->owner == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}
		
		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}
	return (cutie_dog);
}

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i++;
	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
