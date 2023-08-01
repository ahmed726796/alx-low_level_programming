#include "lists.h"

/**
 *get_nodeint_at_index - function that returns
 the nth node of a listint_t linked list
 *
 *@head: pointer to struct listint_t
 *@index: index of the node
 *Return: pointer to the required node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *pt;

	if (head == NULL)
		return (NULL);

	pt = head;

	while (pt)
	{
		if (j == index)
		{
			return (pt);
		}
		pt = pt->next;
		j++;
	}

	return (NULL);
}
