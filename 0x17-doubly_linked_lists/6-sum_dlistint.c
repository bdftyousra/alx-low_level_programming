#include "lists.h"

/**
  * sum_dlistint - sums the data of a linked list
  *
  * @head: first element of linked list
  * Return: 0 if empty, sum otherwise
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
