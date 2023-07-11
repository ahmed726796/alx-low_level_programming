#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * create_array - create an array using dynamic memory allocation
 * @size: size
 * @c: specific char
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *pt = NULL;
	unsigned int i = 0;

	pt = malloc(sizeof(char) * size);

	if (size == 0 || pt == NULL)
		return (NULL);

	while (i < size)
	{
		pt[i++] = c;
	}

	return (pt);
}
