#include "lists.h"

/**
 * add_node_end - add note at the end of the linked list
 *
 * @str: pointer to char
 * @head: pointer to pointer to list_t
 * Return: pointer to list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *pt;

	pt = malloc(sizeof(list_t));
	if (pt == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		pt->str = strdup(str);
		pt->len = strlen(str);
		pt->next = NULL;
		*head = pt;
		return (pt);
	}

	pt->str = strdup(str);
	pt->len = strlen(str);
	pt->next = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = pt;

	return (*head);
}
