#include "lists.h"
/**
 * free_dlistint - function
 * @head: parameter
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}