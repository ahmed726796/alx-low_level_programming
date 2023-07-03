#include<stdio.h>
#include"main.h"

/**
 * _strspn - find length of a prefix substring
 * @s: pointer to string
 * @accept : pointer to string
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int i = 0, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				count++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (count);
			}
		}
	}

	return (count);
}
