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
		if (c < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
