#include<stdio.h>
#include"main.h"

/**
 * reverse_array - reverse the array
 * @n: size of array
 * @a: pointer to int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;
	int t;

	for (i = 0; i < j; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j--] = t;
	}
}
