#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list
 *
 *@head: pointer to listint_t
 *Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *pt;

	if (head == NULL)
		return;

	while (*head)
	{
		pt = (*head)->next;
		free(*head);
		(*head) = pt;
	}

	(*head) = NULL;
}
