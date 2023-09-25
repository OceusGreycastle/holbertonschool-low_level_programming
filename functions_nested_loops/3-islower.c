#include "main.h"

/**
* _islower - prints a specific line
* @c: makes lowercase right
* Return: 0
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
