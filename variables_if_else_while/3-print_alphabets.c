#include <stdio.h>
/**
* main - prints a specific line
*
* Return: 0
*/
int main(void)
{
	char letter = 'a';
	char better = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (better <= 'Z')
	{
		putchar(better);
		better++;
	}

	putchar('\n');

	return (0);
}
