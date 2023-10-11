#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("char: %lu bytes\n", sizeof(char));
printf("int: %lu bytes\n", sizeof(int));
printf("long int: %lu bytes\n", sizeof(long int));
printf("long long int: %lu bytes\n", sizeof(long long int));
printf("float: %lu bytes\n", sizeof(float));

return (0);
}
