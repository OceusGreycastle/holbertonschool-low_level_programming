#include <stdio.h>

/**
* main - a variable
*@i: value int
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("FizzBuzz\n");
		}
		else if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("i\n");
		}
	}

	return (0);
}
