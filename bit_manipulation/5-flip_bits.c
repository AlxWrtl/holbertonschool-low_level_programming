#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to convert one number to another.
 * @n: The first number for comparison.
 * @m: The second number for comparison.
 *
 * Description: This function calculates the number of bits that need to be
 *              flipped to change the value of 'n' to 'm'. It performs an XOR
 *              operation between n and m, then counts the number of set bits
 *              in the result. The number of set bits is equal to the number of
 *              flips required. This process works because XOR highlights the
 *              differing bits between two numbers.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR n and m to find differing bits */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Count the number of set bits in xor_result */
	while (xor_result > 0)
	{
		/* Increment count if the least significant bit is set */
		count += xor_result & 1;
		/* Right shift xor_result to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}
