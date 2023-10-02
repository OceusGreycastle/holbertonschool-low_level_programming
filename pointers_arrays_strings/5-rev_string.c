#include "main.h"
#include "2-strlen.c"

/**
*rev_string - prints string in reverse
*@s: variable
*
*/

void rev_string(char *s)
{
	int a;
	int b = _strlen(s);
	char c;
	char *start = s;
	char *end = s;

	for (a = 0; a <= b - 1; a++)
	{
		end++;
	}
	for (a = 0; b / 2; a++)
	{
		c = *start;
		*start = *end;
		*end = c;
	}
}
