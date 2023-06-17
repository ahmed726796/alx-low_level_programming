#include "stdio.h"

/**
 * main - print chars
 *
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
