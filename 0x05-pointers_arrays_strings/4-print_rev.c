#include<stdio.h>
#include"main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	while (i > 0)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
