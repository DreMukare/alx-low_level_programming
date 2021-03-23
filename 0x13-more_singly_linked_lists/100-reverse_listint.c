#include "lists.h"

/**
* reverse_listint - reverses linked list passed
* @head: pointer to pointer to head
*
* Return: pointer to new head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next_node;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}
	*head = prev;

	return (*head);
}
