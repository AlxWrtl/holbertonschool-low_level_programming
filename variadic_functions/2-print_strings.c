#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings with a separator.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to be printed.
 * @...: Variable arguments representing the strings to be printed.
 *
 * This function takes a variable number of strings and prints them to the
 * standard output with the specified separator between them. If a string is
 * NULL, "(nil)" is printed in its place. If 'separator' is NULL, no separator
 * is printed. The number of strings is determined by the 'n' parameter.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int index;
    const char *str;

    va_start(args, n);

    for (index = 0; index < n; index++)
    {
        str = va_arg(args, const char *);

        if (str == NULL)
            write(1, "(nil)", 5);
        else
            write(1, str, strlen(str));

        if (separator != NULL && index < n - 1)
            write(1, separator, strlen(separator));
    }

    write(1, "\n", 1);

    va_end(args);
}
