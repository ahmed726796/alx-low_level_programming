#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *str_concat - function to concatenate to strings
 *@s2: pointer to char
 *@s1: pointer to char
 *Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;
	int i = 0;
	char *pt;

	if (s1 != NULL)
	{
		for (; s1[len_1] != '\0'; len_1++)
		{}
	}
	if (s2 != NULL)
	{
		for (; s2[len_2] != '\0'; len_2++)
		{}
	}

	pt = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (pt == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			pt[i++] = *s1;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			pt[i++] = *s2;
			s2++;
		}
	}
	pt[i] = '\0';
	return (pt);
}

