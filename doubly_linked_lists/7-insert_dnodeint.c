#include "lists.h"
/**
 * insert_dnodeint_at_index - function
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *temp;
unsigned int count = 0;
if (h == NULL)
{
return (NULL);
}
if (idx == 0)
{
return (add_dnodeint(h, n));
}
temp = *h;
while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}
if (temp == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;

if (temp->next != NULL)
{
temp->next->prev = new_node;
}
temp->next = new_node;
return (new_node);
}
