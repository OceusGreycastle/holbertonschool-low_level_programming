#include "main.h"

/**
*_strlen_recursion - prints the strings length
*@s: the string
*Return: 0
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(++s) + 1);
	}
}
