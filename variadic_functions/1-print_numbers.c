#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers with newline
 * @separator: string printed between numbers
 * @n: integers passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));

		if (a < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
