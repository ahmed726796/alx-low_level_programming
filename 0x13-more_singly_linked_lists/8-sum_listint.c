#include "lists.h"

/**
 *sum_listint - sum of all the data in the linked list
 *
 *@head: pointer to struct listint_t
 *
 *Return: sum of all the data in the list
 */

int sum_listint(listint_t *head)
{
	listint_t *pt;
	int sum = 0;

	if (head == NULL)
		return (0);

	pt = head;

	while (pt)
	{
		sum += pt->n;
		pt = pt->next;
	}

	return (sum);
}
