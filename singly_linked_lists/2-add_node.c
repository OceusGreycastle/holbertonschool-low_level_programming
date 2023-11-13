#include "lists.h"
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t* new_node
	= (list_t*)malloc(sizeof(list_t));

	new_node->str = (*str);

	new_node->next = (*head);

	(*head) = new_node;
}
