#include "main.h"

/**
*_print_rev_recursion - prints a string input in reverse
*@s: input reference to string
*
*/

void _print_rev_recursion(char *s)
{
	char *sptr = s;

	if (*s != '\0')
	{
		sptr++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
