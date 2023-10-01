#include <stdio.h>

/**
* main - a variable
*
* Return: Always 0
*/

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) || (i % 5)) == 0)
			printf("%d FizzBuzz\n", i);
		else if ((i % 3) == 0)
			printf("%d Fizz\n", i);
		else if ((i % 5) == 0)
			printf("%d Buzz\n", i);
		else
			printf("%d\n", i);
	}
	return (0);
}
