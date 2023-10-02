#include "main.h"

/**
*_strcpy - copy data
*@src: variable
*@dest: variable
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a < src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
