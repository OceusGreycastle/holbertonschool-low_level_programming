#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - interates in an array
 * @array: iterable array
 * @size: array size
 * @action: function being called upon
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int s = (int)size;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < s)
	{
		(*action)(array[i]);
		i++;
	}
}
