#include "main.h"
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	char *newArr;
	int i;
	newArr = malloc(size + 1)

	if(newArr == NULL)
	{
		return;
	}
	if(size == 0)
	{
		return (NULL);
	}
	for(i = 0; i < size; i++)
	{
		newArr[i] = c
	}
	newArr[i] = '\0'
	free(newArr);
	return(newArr);
}
