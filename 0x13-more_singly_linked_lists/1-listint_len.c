#include "lists.h"

/**
 *listint_len - return number of elements in the list
 *@h: pointer to const listint_t
 *
 *Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *pt = h;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		return (++counter);
	}

	while (pt->next != NULL)
	{
		pt = pt->next;
		counter++;
	}

	return (++counter);
}
