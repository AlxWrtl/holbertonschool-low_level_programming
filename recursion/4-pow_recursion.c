#include "main.h"

/**
 * _pow_recursion - prototypes
 *
 * @x: number
 * @y: power of
 *
 * Return: value raised, if y is lower than 0 return -1
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else

return (x * _pow_recursion(x, y - 1));

}
