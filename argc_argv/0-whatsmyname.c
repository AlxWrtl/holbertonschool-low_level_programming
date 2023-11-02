#include <stdio.h>

/**
 * printProgramName - function
 *
 * @argc: variable
 * @argv: String
 * Return: 0
 */


void printProgramName(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		fprintf(stderr, "Error: Unable to retrieve program name.\n");
	}
}

/**
 * main - function
 * @argc: variable
 * @argv: String
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printProgramName(argc, argv);

	return (0);
}
