#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Makes a new dog
 * @name: name of new dog
 * @owner: Owner of new dog
 * @age: Age of new dog
 * Return: Always 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy = malloc(sizeof(dog_t));
	char *namecopy = strdup(name);
	char *ownercopy = strdup(owner);

	if (puppy && ownercopy && namecopy)
	{
		(*puppy).name = namecopy;
		(*puppy).owner = ownercopy;
		(*puppy).age = age;
		return (puppy);
	}

	free(ownercopy);
	free(namecopy);
	free(puppy);
	return (0);
}
