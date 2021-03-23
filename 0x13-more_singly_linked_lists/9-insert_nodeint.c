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
	listint_t *temp = *head, *new_node = malloc(sizeof(listint_t));

	while (temp && (count < idx - 1))
	{
		temp = temp->next;
		count++;
	}

	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		if (count + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}

	free(new_node);
	return (NULL);
}
