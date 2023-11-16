#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints the elements of a list
 * @h: pointer to list dlistint_t
 *
 * Return: Always
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%s\n", (*h).n);
		h = (*h).next;
		count++;
	}
	return (count);
}
