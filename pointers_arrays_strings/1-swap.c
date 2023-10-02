#include "main.h"

/**
*swap_int - swaps two integer values
*@a: int value
*@b: int value
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
