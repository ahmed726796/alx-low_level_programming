#include<stdio.h>
#include"main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: pointer to char
 * @src: pointer to char
 * Return: pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		dest[j++] = src[i++];
	}
	dest[j] = src[i];
	return (dest);
}
