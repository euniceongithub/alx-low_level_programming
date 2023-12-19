#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip from one number to another
 * @n: number
 * @m: next
 *
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res;
	unsigned int counter;

	xor_res = n ^ m;
	counter = 0;

	while (xor_res)
	{
		counter += xor_res & 1;
		xor_res >>= 1;
	}
	return (counter);
}
