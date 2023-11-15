#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The number of integers to be summed.
 * @...: Variable arguments representing the integers to be summed.
 *
 * This function takes a variable number of integers and calculates their sum.
 * The number of integers is determined by the 'n' parameter. If 'n' is 0,
 * the function returns 0.
 *
 * Return: The sum of the provided integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int somme = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	somme += va_arg(args, int);
	}

	va_end(args);

	return (somme);


}
