#include"main.h"

/**
 *print_binary - prints the binary representation of a number
 *
 *@n: number
 *Return: void
 */

void print_binary(unsigned long int n)
{
	static int k;

	if (!n && k == 0)
	{
		printf("0");
		return;
	}
	k = 1;
	if (n)
	{
		print_binary(n >> 1);
	}
	else
		return;

	if (n & 1)
		printf("1");

	else
		printf("0");
}
