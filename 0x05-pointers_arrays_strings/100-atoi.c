#include<stdio.h>
#include"main.h"

/**
 * _atoi - function that convert a string to an integer
 * @str: pointer to char
 * Return: int
 */


int _atoi(char *str)
{
	unsigned int n = 0;
	int  i = 0, sign_counter = 0;
	int f = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 48 && str[i] <= 58)
		{
			n = (n * 10) + (str[i] - '0');
			f = 1;
		}
		else if (f == 1)
		{
			break;
		}
		if (str[i] == '-')
		{
		sign_counter++;
		}
	}
	if (sign_counter % 2 != 0)
	{
		return (-1 * n);
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}
