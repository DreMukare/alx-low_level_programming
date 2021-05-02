#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: pointer to pointer to head
* @n: value to put in node
*
* Return: address of new node or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *new_end = malloc(sizeof(dlistint_t));

	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->prev = NULL;
	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		new_end->prev = end;
		end->next = new_end;
	}
	return (new_end);
}
