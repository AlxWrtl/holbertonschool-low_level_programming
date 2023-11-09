#include <stdio.h>

/**
 * main - Prints the name of the current source file.
 *
 * This program prints the name of the current source file using the __FILE__
 * macro. It serves as a simple demonstration of displaying file information
 * within a C program.
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
