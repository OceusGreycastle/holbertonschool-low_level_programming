#include "main.h"

/**
* print_diagonal - print a diagonal line
* @n: int value
* Return: Always 0
*/

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (n > a)
		{
			while (a > b)
			{
				_putchar(' ');
				b++;
			}
			b = 0;
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
	_putchar('\n');
}
