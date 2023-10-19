#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *print_to_98 - function that prints all natural numbers from n to 98.
 *@n: the numbers to print
 */

void print_to_98(int n)
{
	int i;


	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");


			}
			else
				printf("%d, ", i);
		}
	}

	if (n >= 99)
	{
		for (i = n; i > 97; i--)

		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");


			}
			else
				printf("%d, ", i);
		}
	}
}
