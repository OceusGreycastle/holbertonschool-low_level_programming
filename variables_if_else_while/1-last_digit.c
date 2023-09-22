#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints a specific line
*
* Return: 0
*/
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of the number %d is %d \n", n, m);
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("%d and is zero\n", n);
	}
	return (0);
}
