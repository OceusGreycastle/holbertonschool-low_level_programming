#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints any input
 * @format: list of args
 * 
*/

void print_all(const char * const format, ...)
{
    va_list args;
    int x = 0;
    char *str;

    va_start(args, format);

    while (format && format[x])
    {
        switch(format[x])
        {
        case 'c':
            printf("%c", va_args(args, int));
            break;
        case 'i':
            printf("%d", va_args(args, int));
            break;
        case 'f':
            printf("%f", va_args(args, double));
            break;
        case 's':
            str = va_args(args, char *);
            if (!str)
            {
                printf("(nil)");
            }
            printf("%s", str);
            break;
        default;
            break;
        }
        x++;
    }
    printf("\n");

    va_end(args);
}
