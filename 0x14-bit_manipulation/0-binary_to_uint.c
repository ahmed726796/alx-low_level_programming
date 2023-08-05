#include"main.h"

/**
 *rev_string - function to reverse a string
 *@s: pointer to char
 *Return: void
 */

void rev_string(char *s)
{
	int i, j = 0;
	char t;

	for (i = 0; s[i] != '\0'; i++)
	{}

	while (j < i)
	{
		t = s[--i];
		s[i] = s[j];
		s[j++] = t;
	}
}

/**
 *binary_to_uint - converts a binary nber to an unsigned int
 *
 *@b: pointer char
 *Return: converted nber, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	int n = 0, l = 0;

	if (b == NULL)
		return (0);

	l = strlen(b);


	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			n += 1 << j;
			j++;
		}

		else if (b[i] == '0')
			j++;

		else
			return (0);
	}

	return (n);
}
