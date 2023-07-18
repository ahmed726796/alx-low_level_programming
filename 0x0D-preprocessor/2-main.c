#include<unistd.h>


/**
 * main - print file name
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *p = __FILE__;
	char c = '\n';

	while (*p)
	{
		write(1, p, 1);
		p++;
	}
	write(1, &c, 1);


	return (0);
}
