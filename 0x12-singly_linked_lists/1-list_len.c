#include "lists.h"

/**
 *list_len - calculate numbers of element in the linked list
 * @h: pointer to structure linked list
 *
 * Return: number of elements in the linked list
 */



size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *pt = h;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		return (++counter);
	}

	while (pt->next != NULL)
	{
		counter++;
		pt = pt->next;
	}

	return (++counter);
}
