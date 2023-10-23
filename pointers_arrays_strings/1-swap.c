#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swap two numbers.
 * @a: first num.
 * @b: secong num
 */

void swap_int(int *a, int *b)
{

	int temp = *a;

		*a = *b;
	*b = temp;

}
