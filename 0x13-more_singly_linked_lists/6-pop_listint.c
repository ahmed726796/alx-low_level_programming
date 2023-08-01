#include "lists.h"

/**
 *pop_listint - function that deletes
 *the head node of a listint_t linked list,
 *and returns the head node’s data (n)
 *
 *@head: pointer to pointer to listint_t
 *Return: data of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *pt;
	int num;

	if (*head == NULL)
		return (0);

	pt = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(pt);

	return (num);
}
