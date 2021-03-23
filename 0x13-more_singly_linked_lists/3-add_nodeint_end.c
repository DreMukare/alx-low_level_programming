#include "lists.h"

/**
* add_nodeint_end - add new node at end of list
* @head: pointer to pointer to head node
* @n: data in node
*
* Return: address of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t));

	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (!*head)
		*head = new_end;
	else
	{
		while ((*head)->next != NULL)
			*head = *(head)->next;
		(*head)->next = new_end;
	}

	return (new_end);
}
