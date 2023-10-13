#include "main.h"

/**
*is_prime_number - reads for prime numbers
*prime_saves - prime picking helper
*@n: Variable for Prime Integer
*Return: 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_saves(n, 2));
	}
}

/**
*prime_saves - prime picking helper
*@x: Variable for primes
*@y: Variable for prime division
*Return: 0
*/

int prime_saves(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (prime_saves(x, ++y));
	}
}
