#include "main.h"

/**
*_puts_recursion - Prints recursively off a given input
*@s: pointer to the string input
*
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
