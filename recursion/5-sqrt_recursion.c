#include "main.h"

/**
*_sqrt_recursion - square root
*_sqrthelp - Runs comp for SQRT
*@n: base number
*Return: 0
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrthelp(n, 2));
	}
}

/**
*_sqrthelp - Runs comp for SQRT
*@x: Variable for base number
*@y: Variable for rooting case
*Return: 0
*/

int _sqrthelp(int x, int y)
{
	if (y >= x / 2)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else
	{
		return (_sqrthelp(x, y + 1));
	}
}
