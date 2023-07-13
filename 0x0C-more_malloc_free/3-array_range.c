#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - allocate array
 *@min: min
 *@max: max
 *Return: return pointer to char
 */

int *array_range(int min, int max)
{
	int i = 0;
	int j = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
