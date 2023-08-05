#include"main.h"

/**
 * flip_bits - function that returns the number of bits needed
 * to flip number to another
 * @n: number one
 * @m: number two 
 * Return: number of bits needed to be fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = 0;
	unsigned int j = 0;
	unsigned long int number = n ^ m;

	for (k = 0; k <= 63; k++)
	{
		if ((number >> i) & 1)
			j++;
	}
	return (j);
}
