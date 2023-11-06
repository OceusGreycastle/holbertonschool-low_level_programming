#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints string w/ newline
 * @separator: string between strings
 * @n: num of strings passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int x;
    va_list ap;
    char *str;

    va_start(ap, n);

    if (separator == NULL)
    {
        separator = "";
    }

    for (x = 0; x < n; x++)
    {
        str = va_arg(ap, char *);

        if (str == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", str);
        }
        if (x < n - 1)
        {
            if (separator != NULL)
            {
                printf("%s", separator);
            }
            else
            {
                printf(" ");
            }
        }
    }
    va_end(ap);
    printf("\n");
}
