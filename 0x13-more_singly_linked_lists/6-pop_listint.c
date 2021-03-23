#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* @head: pointer to pointer to head
*
* Return: data from new head node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int deleted = 0;

	if (!(*head))
		return (deleted);

	temp = *head;
	deleted = temp->n;
	*head = (*head)->next;
	free(temp);

	return (deleted);
}
