#include "lists.h"
/**
 * add_node_end - function
 * @head: parameter
 * @str: parameter
 * Return: n
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n;
list_t *t;
char *strag;
unsigned int length = 0;

n = malloc(sizeof(list_t));
if (n == NULL)
{
return (NULL);
}
strag = strdup(str);
if (strag == NULL)
{
free(n);
return (NULL);
}
while (strag[length])
{
length++;
}
n->str = strag;
n->len = length;
n->next = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
t = *head;
while (t->next != NULL)
{
t = t->next;
}
t->next = n;
return (n);
}
