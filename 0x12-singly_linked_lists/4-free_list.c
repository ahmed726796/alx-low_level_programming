#include "lists.h"

/**
 * free_list - free linked list
 *
 * @head: pointer to structure list_t
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *pt = head;
	list_t *temp;

	if (head == NULL)
		return;

	while (pt->next != NULL)
	{
		temp = pt;
		pt = pt->next;
		free(temp->str);
		free(temp);
	}
	free(pt->str);
	free(pt);
	head = NULL;
}
