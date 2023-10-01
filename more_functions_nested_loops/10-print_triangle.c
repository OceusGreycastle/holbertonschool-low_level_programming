#include "main.h"

/**
*print_triangle - prints triangles
*@size: SIZE
*Return: Always 0
*/

void print_triangle(int size)
{
	int i = 1;
	int hash = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (hash = 1; hash <= (size - i); hash++)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= i; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
