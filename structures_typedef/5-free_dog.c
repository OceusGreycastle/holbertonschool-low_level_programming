#include "main.h"

/**
 * free_dog - frees the dogs from mem
 * @d: dog pointer
*/

void free_dog(dog_t *d)
{
    free(d);
}