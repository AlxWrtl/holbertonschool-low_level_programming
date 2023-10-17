#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *_insalpha - checks for for alphabetic character.
 * @c: The character to check for the lower charactere
 *
 * Return: 1 if c is lowercase 0 otherwise.
 */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

return (1);
return (0);
}

