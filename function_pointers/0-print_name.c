#include "function_pointers.h"

/**
 * print_name - Executes a function to print a name.
 * @name: The name to be printed.
 * @f: Pointer to a function that prints a name.
 *
 * This function takes a pointer to a function (@f) that prints a name and
 * a string (@name) to be printed. If either the function pointer or the name
 * is NULL, the function returns without performing any action.
 */

void print_name(char *name, void (*f)(char *))
{

	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);

}
