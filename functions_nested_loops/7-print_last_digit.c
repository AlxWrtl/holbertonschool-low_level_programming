#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *print_last_digit - function that prints the last digit of number.
 * @d:  the number in main
 *
 * Return: 1 if c is lowercase 0 otherwise,
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_last_digit(int d)
{
	int ldig;

	ldig = d % 10;

	if (ldig < 0)
		ldig = ldig * -1;

	_putchar (ldig + '0');
	return (ldig);
}
