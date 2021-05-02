#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node a dlistint linked list
* @head: pointer to head
* @index: index of the node
*
* Return: node or NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
