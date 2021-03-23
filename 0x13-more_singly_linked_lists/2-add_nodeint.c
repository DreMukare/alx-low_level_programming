#include "lists.h"

/**
* add_nodeint - adds a new node at beginnning of list
* @head: pointer to pointer to head node
* @n: data in node
*
* Return: pointer to new head node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!new_head)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
