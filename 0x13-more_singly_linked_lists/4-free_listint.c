#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: pointer to head of linked list
*
* Return: no return
*/
void free_listint(listint_t *head)
{
	while (head)
	{	
		head = head->next;
		free(head);
	}
}
