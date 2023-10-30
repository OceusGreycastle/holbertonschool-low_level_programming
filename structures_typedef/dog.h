#ifndef HEADER
#define HEADER

/**
 * struct dog - A struct def
 * @name: The name of the dog
 * @owner: Owners name
 * @age: Age of dog
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
