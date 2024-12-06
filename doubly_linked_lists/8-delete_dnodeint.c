#include "lists.h"
/**
 * delete_dnodeint_at_index - function
 * @head: parameter
 * @index: parameter
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int count = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(temp);
return (1);
}
while (temp != NULL && count < index)
{
temp = temp->next;
count++;
}
if (temp == NULL)
{
return (-1);
}
if (temp->next != NULL)
{
temp->next->prev = temp->prev;
}
if (temp->prev != NULL)
{
temp->prev->next = temp->next;
}
free(temp);
return (1);
}
