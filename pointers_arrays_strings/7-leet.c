#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 * Return: the resulting string
 */

char *leet(char *str)
{
	int i, j;
	char letr[] = "aeotlAEOTL";
	char numb[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letr[j] != '\0'; j++)
		{
			if (str[i] == letr[j])
				str[i] = numb[j];
		}
	}
	return (str);
}
