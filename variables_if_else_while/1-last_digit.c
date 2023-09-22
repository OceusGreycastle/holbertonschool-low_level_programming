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
	printf("The last digit of the number %d is %d \n", n, m);
	return (0);
}
