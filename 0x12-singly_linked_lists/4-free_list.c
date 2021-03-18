#include "lists.h"

/**
* free_list - frees a list_t list
* @head: pointer to head node
*
* Return: no return
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
