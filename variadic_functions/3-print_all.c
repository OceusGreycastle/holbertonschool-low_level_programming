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

	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;

		}
		if ((format[x] == 'c' || format[x] == 'i' || format[x] ==
		'f' || format[x] == 's') && format[(x + 1)] != '\0')
			printf(", ");
		x++;
	}
	printf("\n");

	va_end(args);
}
