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
		while (size > a)
		{
			while (size > b)
			{
				_putchar('#');
				b++;
			}
			b = 0;
			a++;
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
