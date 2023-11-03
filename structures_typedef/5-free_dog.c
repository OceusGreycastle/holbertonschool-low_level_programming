#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dogs from mem
 * @d: dog pointer
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
