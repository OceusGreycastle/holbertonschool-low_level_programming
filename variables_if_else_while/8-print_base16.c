#include <stdio.h>
/**
* main - prints a specific line
*
* Return: 0
*/
int main(void)
{
	char better = 'a';
	int letter = '0';

	while (letter <= '9')
	{
		putchar(letter);
		letter++;
	}
	while (better <= 'f')
	{
		putchar(better);
		better++;
	}

	putchar('\n');

	return (0);
}
