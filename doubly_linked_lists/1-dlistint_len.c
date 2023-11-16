#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - length of list
 * @h: pointer to a list
 *
 * Return: Always count
*/

size_t dlistint_len(const dlistint_t *h)
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
