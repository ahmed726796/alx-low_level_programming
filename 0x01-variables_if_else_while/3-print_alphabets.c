#include "stdio.h"

/**
 * main - print chars
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}

	c = 'A';
	for (; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
