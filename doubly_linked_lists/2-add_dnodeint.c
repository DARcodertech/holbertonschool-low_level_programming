#include "lists.h"
/**
 * add_dnodeint - function
 * @head: parameter
 * @n: parameter
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->prev = NULL;
node->next = *head;
if (*head != NULL)
{
(*head)->prev = node;
}
*head = node;
return (node);
}