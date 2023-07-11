#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *_strdup - function to copy string using dynamic memory
 *@str: pointer to string
 *Return: pointer to char
 *
 */

char *_strdup(char *str)
{
	char *pt;
	int k = 0;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
	{}

	pt = malloc(sizeof(char) * (k + 1));

	if (pt == NULL)
		return (NULL);

	k = 0;
	while (*str)
	{
		pt[k++] = *str;
		str++;
	}
	pt[k] = '\0';

	return (pt);
}
