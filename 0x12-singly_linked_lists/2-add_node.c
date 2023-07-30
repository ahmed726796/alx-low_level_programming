#include"lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head: pointer to pointer to structure list
 * @str: string
 * Return: pointer to first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *pt;

	pt = malloc(sizeof(list_t));
	if (pt == NULL)
		return (NULL);

	pt->str = strdup(str);
	pt->len = strlen(str);
	pt->next = (*head);
	*head = pt;

	return (pt);
}
