#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to pointer to head node
* @idx: index where new node should be added
* @n: data to enter in new node
*
* Return: new node at index idx, NULL if it failed or wasn't possible to add
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!(*head))
		return (NULL);

	while ((*head))
	{
		if (count == idx)
		{
			head[count - 1]->next = new_node;
			new_node->next = (*head)->next;
		}
		count++;
		*head = (*head)->next;
	}
	return (new_node);
}
