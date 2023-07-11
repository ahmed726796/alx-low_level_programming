#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *alloc_grid - allocate multi array
 *@height: height of the array
 *@width: width of the array
 *Return: pointer pointer to char
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **pt;

	if (width <= 0 || height <= 0)
		return (NULL);
	pt = malloc(sizeof(int *) * height);
	if (pt == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		pt[i] = malloc(sizeof(int) * width);

		if (pt[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(pt[i]);
			}
			free(pt);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pt[i][j] = 0;
		}
	}
	return (pt);
}
