#include "main.h"

/**
*_strlen - length of a string
*@s: variable value
*Return: Length of String
*/

int _strlen(char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}
