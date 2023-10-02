#include "main.h"

/**
*_strcpy - copy data
*@src: variable
*@dest: variable
*/

char *_strcpy(char *dest, char *src)
{
	int a, b;

	for (a = 0; a < b && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < b; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
