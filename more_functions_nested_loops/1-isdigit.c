#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _isdigit - fonction that return 1 if it's a number.
 *@c: the character to check.
 * Return: 1 id it's digit, 0 if it's oterwise.
 */

int _isdigit(int c)
{

if (c >= '0' &&  c <= '9')


return (1);
return (0);
}
