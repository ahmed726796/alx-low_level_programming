#include "lists.h"

/**
 * print_listint - print list a linked list
 *
 * @h: pointer to struct listint
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *pt = h;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (++counter);
	}

	while (pt->next != NULL)
	{
		printf("%d\n", pt->n);
		pt = pt->next;
		counter++;
	}

	printf("%d\n", pt->n);
	return (++counter);
}
