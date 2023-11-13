#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints a list of str, or char
 * @h: pointer to a list
 *
 * Return: Always cnt
*/

size_t print_list(const list_t *h)
{

	size_t count;

	count = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		count++;
	}
	return (count);
}
