#include "lists.h"

/**
* add_nodeint - check the code
* @n: interger variable
* @head: pointer
*
* Return: - nnode
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
