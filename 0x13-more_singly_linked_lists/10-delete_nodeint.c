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
	listint_t *temp = *head, *next_node;

	if (!head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && (count < index - 1))
	{
		temp = temp->next;
		count++;
		if (!(temp) || !(temp->next))
			return (-1);
	}

	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;

	return (1);
}
