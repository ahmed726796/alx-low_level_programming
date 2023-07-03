#include<stdio.h>
#include"main.h"

/**
 *_strstr - function to find a pattern
 *@s: pointer to string
 *@accept: pointer to string
 *Return: pointer to string
 */

char *_strstr(char *s, char *accept)
{

	unsigned int count = 0;
	unsigned int i = 0, j = 0, length = 0;

	for (length = 0; accept[length] != '\0'; length++)
	{}

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i + count] == accept[j])
			{
				count++;
			}
		}
		if (count == length)
		{
		return (&s[i]);
		}
		else
		{
		count = 0;
		}
		i++;
	}

	return (0);
}
