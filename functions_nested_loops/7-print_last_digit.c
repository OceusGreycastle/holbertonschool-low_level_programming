#include "main.h"

/**
* print_last_digit - prints a specific line
* @n: yes
* Return: 0
*/

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	_putchar(a + '0');
	return (a);
}
