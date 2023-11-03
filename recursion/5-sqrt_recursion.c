#include "main.h"

/**
 * _sqrt_recursion_guess(- 2nd function
 *
 * @n: number
 * @guess: result
 *
 * Return: guess or -1
 */


int _sqrt_recursion_guess(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_guess(n, guess + 1));
}
/**
 *  * _sqrt_recursion - 2nd function
 *
 * @n: number
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_guess(n, 1));
}
