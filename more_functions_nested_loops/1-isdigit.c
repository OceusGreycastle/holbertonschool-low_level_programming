#include "main.h"

/**
*_isdigit - identifies a digit 0-9
*@c: Int value
*Return: 0
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
