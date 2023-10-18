#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *_abs - function that computes the absolute value of an integer.
 * @a:  the sign of a number.
 *
 * Return: 1 if c is lowercase 0 otherwise,
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int _abs(int a)
{
if (a < 0)
	return (-a);
else
	return (a);
}
