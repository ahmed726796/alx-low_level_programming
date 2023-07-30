#include"lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: pointer to structure list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *pt = h;
	size_t counter = 0;

	if (h == NULL)
		return (0);

	else if (h->next == NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (++counter);
		}
		printf("[%d] %s\n", h->len, h->str);
		return (++counter);
	}

	else
	{
		while (pt->next != NULL)
		{
			if (pt->str == NULL)
			{
				printf("[0] (nil)\n");
				pt = pt->next;
				counter++;
				continue;
			}
			printf("[%d] %s\n", pt->len, pt->str);
			pt = pt->next;
			counter++;
		}
		if (pt->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s\n", pt->len, pt->str);
	}
	return (++counter);
}
