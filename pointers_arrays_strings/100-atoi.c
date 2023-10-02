#include "main.h"

/**
*_atoi - print
*@s: variable
*Return: Always 0
*/

int _atoi(char *s)
{
	int i;
	int x;
	int v;
	int q = 1;

	while (s[i] > '\0')
	{
		if (s[i] == '-')
		{
			x++;
		}
		if ((v > 0) && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (v * 10 == 2147483640 && s[i] == '8')
				v = (v * 10) + 7;
			else
				v = (v * 10) + (s[i] - '0');
		}
		i++;
	}
	if (x % 2 == 1)
		q = -1;
	if (v == 2147483647 && q == -1)
	{
		v = v * q;
		return (v - 1);
	}
	else
		return (v * q);
}
