#include <stdio.h>
/**
* main - prints a specific line
*
* Return: 0
*/
int main(void)
{
	int letter = '0';

	while (letter <= '9')
	{
		putchar(letter);
		if (letter != '9')
		{
			putchar(',');
			putchar(' ');
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
