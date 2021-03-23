#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* @head: pointer to pointer to head
*
* Return: data from new head node
*/
int pop_listint(listint_t **head)
{
	listint *holder, *temp = *head;

	*head = temp->next;
	free(temp);
	holder = *head;
	return (holder->n);
}
