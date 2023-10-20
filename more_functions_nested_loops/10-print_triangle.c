#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_triangle -function that prints a triangle
 *@size: is the size of the triangle
 */

void print_triangle(int size)
{
	int Htg1, Htg2;

	if (size > 0)

		for (Htg1 = 1; Htg1 <= size ; Htg1++)
		{

			for ((Htg2 = size - Htg1); Htg2 > 0; Htg2--)
				_putchar(' ');
			_putchar('#');

			for (Htg2 = 1; Htg2 < Htg1 ; Htg2++)
			{

				_putchar('#');
			}
			_putchar('\n');
		}
}
