#include "lists.h"

/**
* pop_listint - Deletes a list element
* @head: double pointer to head
* Return: number of elements deleted
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
