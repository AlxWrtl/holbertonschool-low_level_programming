#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_triangle -function that prints a triangle
 *@size: is the size of the triangle
 */

void print_triangle(int size)
{
	int lgn, spc, htg;

	if (size > 0)

		for (lgn = 1; lgn <= size ; lgn++)
		{

			for (spc = size - lgn; spc > 0; spc--)
				_putchar(' ');

			for (htg = lgn; htg > 0;htg--)

				_putchar('#');

			if (lgn != size)
				_putchar('\n');
		}
	_putchar('\n');
}

