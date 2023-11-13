#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints a list of str, or char
 * @h: pointer to a list
*/

size_t print_list(const list_t *h)
{
	int cnt = 0;

	while ((*h).str != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		cnt++;
	}
	return (cnt);
}
