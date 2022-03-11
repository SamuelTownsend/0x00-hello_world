#include "lists.h"

/**
* add_nodeint_end - check the code
* @head: double pointer
* @n: interger variable
* Return: nnode
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *onode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}
	onode = *head;
	while (onode->next != NULL)
		onode = onode->next;
	onode->next = onode;
	return (onode);
}
