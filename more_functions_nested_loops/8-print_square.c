#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_square -function that prints a square
 *@size: is the size of the square
 */
void print_square(int size)
{

	int ht, wt;

	for (ht = 0; ht < size; ht++)
	{
		for (wt = 0; wt < size; wt++)
		{
			_putchar('#');
		}
		_putchar('\n');

		if (size <= 0)
		{
			_putchar('\n');

		}
	}
}
