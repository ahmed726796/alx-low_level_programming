#include"main.h"

/**
 *get_bit - function that returns the value of a bit at a given index
 *
 *@n: number to get the index
 *@index: index of the bit
 *Return: the value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
