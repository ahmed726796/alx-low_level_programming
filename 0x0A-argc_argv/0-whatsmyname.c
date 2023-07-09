#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (counter = 1; counter < argc; counter++)
		{
			printf("argv[%d] = %s\n", counter, argv[counter]);
		}
	}

	return (0);
}
