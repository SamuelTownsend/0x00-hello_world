#include "lists.h"

/**
* free_listint - check the code
* @head: pointer
*
* Return: none
*/

void free_listint(listint_t *head)
{
	listint_t *nnode, onode;

	nnode = head;

	while (nnode != NULL)
	{
		onode = *nnode;
		free(nnode);
		nnode = onode.next;
	}
}
