#include<stdio.h>
#include"main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: pointer to int
 * @n: size of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
	else
	{
		printf("\n");
	}
}
