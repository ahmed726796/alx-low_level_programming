#include<stdio.h>
#include"main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to s1
 * @src: pointer to s2
 * @n: num
 * Return: pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k = 0;
	int len_1 = 0, len_2 = 0;

	for (len_1 = 0; dest[len_1] != '\0'; len_1++)
	{}
	for (len_2 = 0; src[len_2] != '\0'; len_2++)
	{}

	if (n >= len_2)
	{
		for (i = 0; i < len_2; i++)
		{
			dest[i] = src[k++];
		}
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[k++];
		}
	}
	return (dest);
}
