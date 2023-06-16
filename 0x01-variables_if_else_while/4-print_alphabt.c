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
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
