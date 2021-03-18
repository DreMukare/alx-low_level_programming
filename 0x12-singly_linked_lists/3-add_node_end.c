#include "lists.h"

/**
* _strlen - returns length of a string
* @str: pointer to string
*
* Return: length of string
*/
int _strlen(const char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;

	return (i);
}

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer to head node
* @str: string in node
*
* Return: address of new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *new_node;

	end_node = malloc(sizeof(struct list_s));
	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end_node = *head;

		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}

	return (new_node);
}
