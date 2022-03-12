#include "lists.h"

/**
* delete_nodeint_at_index - check the code
* @head: double pointer
* @index: interger variable 
* Return: value
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nnode = *head;
	listint_t *onode = NULL;
	unsigned int n = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = nnode->next;
		free(nnode);
		return (1);
	}
	while (nnode != NULL && n < index)
	{
		onode = nnode;
		nnode = nnode->next;
		n++;
	}
	if (nnode == NULL)
		return (-1);
	onode->next = nnode->next;
	free(nnode);
	return (1);
}

