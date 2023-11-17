
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on the format provided
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int index = 0;
	char *strg;

	va_start(args, format);

	while (format && format[index])
	{
		if (index)
		{
			printf(", ");
		}

		switch (format[index++])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			break;

			case 'i':
			printf("%d", va_arg(args, int));
			break;

			case 'f':
			printf("%f", (float)va_arg(args, double));
			break;

			case 's':
			strg = va_arg(args, char*);
			printf("%s", strg ? strg : "(nil)");
			break;
		}

	}
	printf("\n");

	va_end(args);
}
