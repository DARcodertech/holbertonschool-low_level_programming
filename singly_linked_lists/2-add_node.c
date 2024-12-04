#include "lists.h"
/**
 * add_node - function
 * @head: parameter
 * @str: parameter
 * Return: n
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
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
while (str[length])
{
length++;
}
n->str = strag;
n->len = length;
n->next = *head;
*head = n;
return (n);
}
