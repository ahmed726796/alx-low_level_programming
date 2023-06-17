#include "stdio.h"

/**
 * main - print numbers
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		printf("%d", c);
	}
	putchar('\n');

	return (0);
}
