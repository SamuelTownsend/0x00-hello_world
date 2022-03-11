#include "lists.h"

/**
* sum_listint - check the code
* @head: pointer
* Return:  sum 
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nnode;

	if (!head)
		return (0);
	nnode = head;
	while (temp)
	{
		sum += nnode->n;
		nnode = nnode->next;
	}
	return (sum);
}

