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
	char alphar;

	alphar = 'z';

	while (alphar >= 'a')
{
	putchar(alphar);
	alphar--;
}

putchar('\n');
return (0);
}
