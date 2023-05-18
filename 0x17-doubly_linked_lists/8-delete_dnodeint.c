#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at an index in doubly
  * linked list
  *
  * @head: double pointer to first node of linked list
  * @index: index to delete node at
  * Return: 1 on success, -1 if failure
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *before, *after, *tmp;

	before = *head;
	after = *head;

	if (!head || *head == NULL)
		return (-1);

	if (after)
		after = after->next;
	for (i = 0; after != NULL && i < index; i++)
	{
		before = before->next;
		after = after->next;
	}
	if (index == 0 && *head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	if (i == index && before != NULL)
	{
		tmp = before;
		before = before->prev;
		free(tmp);
		before->next = after;
		if (after)
			after->prev = before;
		return (1);
	}

	return (-1);
}
