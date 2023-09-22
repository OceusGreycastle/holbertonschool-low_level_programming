#include <stdio.h>
#include <time.h>
/**
* main - prints a specific line
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf(n"is positive\n")
	return (0);
}
	return (0);
}
