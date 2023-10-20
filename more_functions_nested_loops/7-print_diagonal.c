#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - unction that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int nada;
	int slch;

	for (nada = 0; nada < n; nada++)
	{
		for (slch = 0; slch < nada ; slch++)

		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
		if (n <= 0)
	{
		_putchar('\n');
	}
}

