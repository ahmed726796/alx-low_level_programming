#include "lists.h"

/**
 *delete_nodeint_at_index - delete node from the list
 *
 *@head: head of the node
 *@index: index
 *Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *pt = *head;
	listint_t *t;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);


	t = pt->next;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(pt);
		return (1);
	}

	if ((*head)->next == NULL)
	{
		return (-1);
	}

	while (pt)
	{
		if (i ==  index - 1)
		{
			pt->next = t->next;
			t->next = NULL;
			free(t);
			return (1);
		}
		pt = pt->next;
		t = t->next;
		i++;
	}

	return (-1);
}
