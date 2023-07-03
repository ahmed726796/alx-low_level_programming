#include<stdio.h>
#include"main.h"

/**
 * _memset - function that is fill the memory
 * @s: pointer to string
 * @b: char b
 * @n: number of bytes
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int j = 0;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
