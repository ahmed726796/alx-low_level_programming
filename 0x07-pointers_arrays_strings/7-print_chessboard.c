#include<stdio.h>
#include"main.h"

/**
 * print_chessboard -  prints the chessboard
 * @a: pointer to an int
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, k = 0;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[i][k]);
		}
		_putchar('\n');
	}
}
