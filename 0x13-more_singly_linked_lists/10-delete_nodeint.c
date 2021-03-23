#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index given
* @head: pointer to pointer to head
* @index: index to delete at
*
* Return: 1 on success, -1 on fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head, *temp1;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		while (temp && (count < n - 1))
			temp = temp->next;
		temp1 = temp->next;
		temp->next = temp1->next;
		free(temp1);
		return (1);
	}
	return (-1);
}
