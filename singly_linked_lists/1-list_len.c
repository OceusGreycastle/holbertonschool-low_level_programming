#include "lists.h"
#include <stdlib.h>

/**
 * list_len - length of a list
 * @h: pointer to a list
*/

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
