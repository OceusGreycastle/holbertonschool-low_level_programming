#include "main.h"
/**
* print_line - function
* @n: an int value
* Return: Always 0
*/
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (n > a)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
	_putchar('\n');
}
