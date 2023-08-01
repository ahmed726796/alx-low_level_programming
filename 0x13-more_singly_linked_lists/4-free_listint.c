#include "lists.h"

/**
 *free_listint - function to free a linked list
 *
 *@head: pointer to struct listint
 *Return: Nothing
 */

void free_listint(listint_t *head)
{

	listint_t *pt = head;

	if (head == NULL)
		return;

	while (pt->next != NULL)
	{
		head = pt->next;
		free(pt);
		pt = head;
	}
	free(pt);
	head = NULL;
}
