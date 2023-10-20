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

	if (size > 0)
	{
		for (ht = 0; ht < size; ht++)
		{
			for (wt = 0; wt < size; wt++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
		else
			_putchar('\n');

}
