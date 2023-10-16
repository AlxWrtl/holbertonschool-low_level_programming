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
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
{
	putchar ('0' + nbr);

	if (nbr <= 8)

{
	putchar (',');
	putchar (' ');
}
}
putchar('\n');
return (0);
}
