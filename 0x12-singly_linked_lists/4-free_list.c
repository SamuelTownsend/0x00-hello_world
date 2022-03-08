#include "lists.h"

/**
* free_list - check the code
* @head: pointer
* Return: no value
*/

void free_list(list_t *head)
{
	list_t *forn;

	while (head != NULL)
	{
	forn = head->next;
	free(head->str);
	free(head);
	head = forn;
	}
}
