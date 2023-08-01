#include "lists.h"

/**
 *add_nodeint_end - add note at the end of a linked list
 *
 *@n: data to be added
 *@head: pointer to pointer to struct listint_t
 *Return: pointer to added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pt;
	listint_t *temp = *head;

	pt = malloc(sizeof(listint_t));
	if (pt == NULL)
		return (NULL);

	if (*head == NULL)
	{
		pt->n = n;
		pt->next = NULL;
		*head = pt;
		return (pt);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	pt->n = n;
	pt->next = NULL;
	temp->next = pt;
	return (pt);

}
