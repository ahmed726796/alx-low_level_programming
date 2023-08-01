#include "lists.h"

/**
 *add_nodeint - add node at the beginning of a linked list
 *@head: pointer to pointer sturct listint_t
 *@n: data to be added to the list
 *Return: pointer to add node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	pt = malloc(sizeof(listint_t));

	if (pt == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		pt->n = n;
		pt->next = NULL;
		*head = pt;
		return (pt);
	}

	pt->n = n;
	pt->next = (*head);
	(*head) = pt;
	return  (pt);
}
