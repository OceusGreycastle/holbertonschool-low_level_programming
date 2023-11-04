#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name as is
 * @name: pointer to a function for the name that's printed
 * @f: Pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
    if (*f)
        (*f)(name);
}
