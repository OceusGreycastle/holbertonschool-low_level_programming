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
	dog_t *my_dog = malloc(sizeof(dog_t));
	char *namecopy = strdup(name);
	char *ownercopy = strdup(owner);

	if (my_dog == NULL)
	return (NULL);

	if (my_dog && ownercopy && namecopy)
	{
		(*my_dog).name = namecopy;
		(*my_dog).owner = ownercopy;
		(*my_dog).age = age;
		return (my_dog);
	}

	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	return (0);
}
