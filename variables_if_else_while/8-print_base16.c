#include <stdio.h>
/**
* main - prints a specific line
*
* Return: 0
*/
int main(void)
{
	char letter = 'a';
	int better = '0';

	while (letter <= '9')
	{
		putchar(letter);
		better++;
	}
	while (better <= 'f')
	{
		putchar(better);
		letter++;
	}

	putchar('\n');

	return (0);
}
