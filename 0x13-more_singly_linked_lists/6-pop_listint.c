#include "lists.h"

/**
* pop_listint - Deletes a list element
* @head: double pointer to head
* Return: number of elements deleted
*/

int pop_listint(listint_t **head)
{
	listint_t *nnode;

	int x;


	if (head == NULL || *head == NULL)
		return (0);
	nnode = *head;
	*head = temp->next;
	x = temp->x;
	free(nnode);
	return (x);
}
