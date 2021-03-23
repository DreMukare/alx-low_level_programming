#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* sets the head to NULL
* @head: pointer to pointer to head node
*
* Return: no return
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
