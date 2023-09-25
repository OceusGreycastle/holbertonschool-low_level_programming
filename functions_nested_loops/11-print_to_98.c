#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Program start
 *@n: integer
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			printf(", ");
			n == (n + 1);

		}
		printf("98");
	}
	else
	{
		while (n != 98)
		{
			printf("%d", n);
			printf(", ");
			n == (n - 1);
		}
		printf("98");
	}
}
