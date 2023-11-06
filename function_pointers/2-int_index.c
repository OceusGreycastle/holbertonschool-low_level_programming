#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - initializing index
 * @array: the index being initialized
 * @size: size of array
 * @cmp: comparison
 * Return: init stop point number
*/

int int_index(int *array, int size, int (*cmp)(int))
{
    int check;
    int i = 0;

    if (size == 0 || array == NULL || cmp == NULL)
        return (-1);

    while (i < size)
    {
        check = (*cmp)(array[i]);

        if (check != 0)
            return (i);
        
        i++;
    }

    return (-1);
}
