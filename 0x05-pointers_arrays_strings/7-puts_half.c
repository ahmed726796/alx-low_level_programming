#include<stdio.h>
#include"main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: pointer to char
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, i = 0;

	for (len = 0; str[len]; len++)
	{}

	i = len / 2 + len % 2;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
