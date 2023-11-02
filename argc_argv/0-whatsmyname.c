#include <stdio.h>

/**
 * main - function
 *
 * @argc: variable
 * @argv: String
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}

	else
	{
		return (1);
	}

	return (0);
}
