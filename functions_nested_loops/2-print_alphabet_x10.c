#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the lowercase alphabet to the console x10.
 *
 */

void print_alphabet_x10(void)
{
char letter;
int compteur;

for (compteur = 0; compteur < 10; compteur++)
{
for (letter = 'a'; letter <= 'z'; letter++)

{
	_putchar(letter);

}


}

_putchar('\n');

}

