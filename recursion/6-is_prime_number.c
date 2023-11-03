#include "main.h"

/**
 * is_prime_helper- second function
 *
 * @n: number
 * @div: result
 *
 * Return: 0 or 1
 */



int is_prime_helper(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, div + 2));
}

/**
 * is_prime_number - prototypes
 *
 * @n: number
 *
 * Return: 0 or n
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, 3));
}

