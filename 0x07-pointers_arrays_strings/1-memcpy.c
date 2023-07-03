#include<stdio.h>
#include"main.h"

/**
 * _memcpy - copy memory area
 * @dest: pointer to string to copy
 * @src: pointer to string to copy to
 * @n: number of memery area
 * Return: pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;

	for (; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
