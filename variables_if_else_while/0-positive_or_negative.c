#include <stdio.h>
#include <stdlib.h>
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
	
	printf("%d \n", n);
	
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	}
		printf("is zero\n");
	}
	return (0);
}
