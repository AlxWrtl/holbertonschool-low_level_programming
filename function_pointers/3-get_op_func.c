#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * This function returns the sum of the two integers 'a' and 'b'.
 *
 * Return: The sum of the two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts one integer from another.
 * @a: The first integer (minuend).
 * @b: The second integer (subtrahend).
 *
 * This function returns the result of subtracting 'b' from 'a'.
 *
 * Return: The result of the subtraction.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * This function returns the product of the two integers 'a' and 'b'.
 *
 * Return: The product of the two integers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides one integer by another.
 * @a: The dividend.
 * @b: The divisor.
 *
 * This function returns the result of dividing 'a' by 'b'.
 *
 * Return: The result of the division.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * This function returns the remainder of the division of 'a' by 'b'.
 *
 * Return: The remainder of the division.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
exit(100);
	}
	return (a % b);
}
