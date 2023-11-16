#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers with a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 * @...: Variable arguments representing the integers to be printed.
 *
 * This function takes a variable number of integers and prints them to the
 * standard output with the specified separator between them. If 'separator'
 * is NULL, no separator is printed. The number of integers is determined by
 * the 'n' parameter.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
