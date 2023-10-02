#include "main.h"

/**
*print_rev - prints in reverse
*@s: VARIABLE
*/

void print_rev(char *s)
{
	int E = 0;

	while (s[E] != '\0')
	{
		E++;
	}
	E = E - 1;

	for (E = E; E >= 0; E--)
	{
		_putchar(s[E]);
	}
	_putchar('\n');
}
