#include "main.h"

/**
* print_square - prints squares
* @size: square size
* Return: Always 0
*/

void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (size >= a)
		{
			while (a = b)
			{
				_putchar('#');
				b++;
			}
			b = 0;
			_putchar('#');
			_putchar('\n');
			a++;
		}
	}
	else
	_putchar('\n');
}
