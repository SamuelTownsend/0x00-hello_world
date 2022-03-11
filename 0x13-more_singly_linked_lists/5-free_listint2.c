#include "lists.h"

/**
* free_listint2 - check the code
* @head: pointer
*
* Return: void.
*/
void free_listint2(listint_t **head)

{
	listint_t *nnode;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nnode = *head;
		*head = (*head)->next;
		free(nnode);
	}
	*head = NULL;
}
