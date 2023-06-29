#include<stdio.h>
#include"main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: pointer to char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, k = 0;
	int length1 = 0, length2 = 0, total_len = 0;

	for (length1 = 0; dest[length1] != '\0'; length1++)
	{}
	for (length2 = 0; src[length2] != '\0'; length2++)
	{}

	total_len = length1 + length2;

	for (i = length1; i < total_len; i++)
	{
		dest[i] = src[k++];
	}
	dest[i] = '\0';
	return (dest);
}
