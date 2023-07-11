#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *free_grid - function to free a dynamic memory
 *@grid: pointer pointer to int
 *@height: height
 *Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int k = 0;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
