#include<stdio.h>
#include"main.h"

/**
 * _puts_recursion - prints string using recursion
 *
 * @s: pointer to char
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
