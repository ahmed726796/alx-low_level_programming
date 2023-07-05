#include<stdio.h>
#include"main.h"

/**
 * _strlen_recursion - find length of a string using recursion
 *
 * @s: pointer to char
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	unsigned long int n = 0;

	if (*s)
	{
		i++;
		n = _strlen_recursion(++s);
	}

	return (i + n);

}
