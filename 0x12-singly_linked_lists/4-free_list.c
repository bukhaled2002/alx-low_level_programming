#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 *
 * Return: void
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	
	while(ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
}
