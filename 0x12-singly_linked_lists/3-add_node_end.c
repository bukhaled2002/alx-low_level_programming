#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *ptr = *head;
unsigned int len = 0;

while (str[len])
len++;
new = malloc(sizeof(list_t));

if (!new)
	return (NULL);
new->next = NULL;
new->str = strdup(str);
new->len = len;
if (ptr == NULL)
	*head = new;
else
{
while (ptr->next != NULL)
	ptr = ptr->next;
ptr->next = new;
}
	return (new);
}
