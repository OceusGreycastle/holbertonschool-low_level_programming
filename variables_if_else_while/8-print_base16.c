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

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	while (better <= '9')
	{
		putchar(better);
		better++;
	}

	putchar('\n');

	return (0);
}
