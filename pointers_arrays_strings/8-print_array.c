#include "main.h"
#include <stdio.h>

/**
 * print_array - function that printselements of an array of integers
 * @a: string
 * @n: elements to print
 */
void print_array(int *a, int n)
{
	int save;


	for (save = 0; save < n; save++)
	{
		printf("%d", a[save]);
		if (save < n - 1)
		{

			printf(", ");

		}
	}

	putchar('\n');

}
