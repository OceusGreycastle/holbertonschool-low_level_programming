#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main func block
*/

int main(int argc, char **argv)
{
	int (*proc_nums)(int, int);

	proc_nums = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (!proc_nums)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		printf("%d\n", proc_nums(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
}
