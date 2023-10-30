#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -
*/
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *puppy = malloc(sizeof(dog_t));
	char *namecopy = strdup(name);
	char *ownercopy = strdup(owner);

	if (puppy && ownercopy && namecopy)
	{
		(*puppy).namecopy = name;
		(*puppy).ownercopy = owner;
		(*puppy).age = age;
		return (puppy);
	}
	free(puppy);
	free(ownercopy);
	free(namecopy);
	return (0);
}
