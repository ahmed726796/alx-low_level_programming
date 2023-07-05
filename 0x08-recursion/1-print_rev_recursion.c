#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - prints string in reverse using recursion
 * @s: pointer to char
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
	}
	else
	{
		return;
	}
	s--;
	putchar(*s);
}
