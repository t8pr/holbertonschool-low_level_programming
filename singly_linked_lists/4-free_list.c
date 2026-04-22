#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* Save the pointer to the next node before freeing the current one */
		temp = head->next;

		/* Free the duplicated string first */
		free(head->str);

		/* Free the node structure */
		free(head);

		/* Move to the next node */
		head = temp;
	}
}
