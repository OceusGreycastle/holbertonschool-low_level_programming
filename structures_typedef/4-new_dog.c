#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include "_strlen.c"
#include "strcpy.c"

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

	if (my_dog == NULL)
		return (NULL);

	(*my_dog).name = malloc(_strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	(*my_dog).owner = malloc(_strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}

	strcpy(my_dog->name, name);
	my_dog->age = age;
	strcpy(my_dog->owner, owner);

	return (my_dog);
}
