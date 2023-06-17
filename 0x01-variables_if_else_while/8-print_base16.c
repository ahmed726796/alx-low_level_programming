#include "stdio.h"

/**
 * main - print numbers
 *
 * Return: 0
 */

int main(void)
{
	int c = 48;

	for (; c < 58; c++)
	{
		putchar(c);
	}

	c = 97;

	for (; c < 103; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
