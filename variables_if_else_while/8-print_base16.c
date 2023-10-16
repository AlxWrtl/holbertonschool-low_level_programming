#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
	putchar('0' + nbr);
	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
	putchar(alphabet);
	}

putchar('\n');
return (0);
}
