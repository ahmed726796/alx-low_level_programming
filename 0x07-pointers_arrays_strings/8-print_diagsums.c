#include<stdio.h>
#include"main.h"

/**
 *print_diagsums -  prints the sum of the two diagonals of a square matrix of integers
 *@a: pointer to array
 *@size: size
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, k = 0, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (i == k)
			{
				s1 += a[i * size + k];
			}
			if (i + k == size - 1)
			{
				s2 += a[i * size + k];
			}
		}
	}
	printf("%d, %d\n", s1, s2);
}
