#include "lists.h"
/**
 * get_dnodeint_at_index - function
 * @head: parameter
 * @index: parameter
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
return (NULL);
}
