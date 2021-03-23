#include "lists.h"

/**
* reverse_listint - reverses linked list passed
* @head: pointer to pointer to head
*
* Return: pointer to new head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = NULL;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		current->next = prev;
		prev = current;
	}
	*head = current;

	return (*head);
}
