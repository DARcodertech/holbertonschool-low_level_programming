#include "lists.h"
/**
 * print_dlistint - print
 * @h: parameter
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
