#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: pointer to dog struct
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
{
    (*d).name = name;
    (*d).owner = owner;
    (*d).age = age;
}
