#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *string_nconcat - function to concatenate to strings
 *@s2: pointer to char
 *@s1: pointer to char
 *@n: no to concatenate from string 2
 *Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *p;

	if (s1 != NULL)
	{
		for (; s1[l1] != '\0'; l1++)
		{}
	}
	if (s2 != NULL)
	{
		for (; s2[l2] != '\0'; l2++)
		{}
	}
	if (n >= l2)
		n = l2;
	p = malloc(sizeof(char) * (l1 + n + 1));
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			p[i++] = *s1;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (j < n)
		{
			p[i++] = *s2;
			s2++;
			j++;
		}
	}
	p[i] = '\0';
	return (p);
}
