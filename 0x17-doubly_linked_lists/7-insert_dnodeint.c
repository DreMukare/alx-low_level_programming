#include "lists.h"

/**
* insert_dnodeint_at_index - inserts node at nth position
* @h: pointer to pointer to head
* @idx: index
* @n: value to go in new node
*
* Return: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx,
* do not add the new node and return NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL)
	{
		if (count == idx && idx != 0)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
