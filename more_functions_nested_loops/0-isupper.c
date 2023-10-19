#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _isupper - fonction that return 1 if it's an uppercase.
 *@c: the character to check.
* Return: 1 if is uppercase, 0 fi is lowercase
 */

int _isupper(int c)
{

if (c >= 'A' &&  c <= 'Z')


return (1);
return (0);
}

