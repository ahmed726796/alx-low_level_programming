#include<stdio.h>
#include"main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: char to locate
 * Return: the located character
 */

char *_strchr(char *s, char c)
{

	int j = 0;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
